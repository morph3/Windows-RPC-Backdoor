# Windows RPC Backdoor 

A very simple RPC server I've developed while studying Windows RPC. 

Has cpp and python client implementations as well.


# Compilation

Use x64 native tools command prompt of visual studio.

Generate header files with

```bat
midl /app_config rpc_backdoor_server.idl
```


Compiling server,
```bat
cl.exe .\server.cpp .\rpc_backdoor_server_s.c
```

Running server,
```bat
.\server.exe
```

Compiling client,
```bat
cl.exe .\client.cpp .\rpc_backdoor_server_c.c
```

Running client,
```bat
.\client.exe ipconfig
```

or 

```bat
python3 client.py whoami
```


# TODO

* AES encrypted traffic
* Protected inferfaces, (Only allows anonymous connections now, I might consider adding protected interfaces as well)
* Other protocol sequences

# References

* https://csandker.io/2022/05/24/Offensive-Windows-IPC-3-ALPC.html
* https://csandker.io/2021/02/21/Offensive-Windows-IPC-2-RPC.html
* https://csandker.io/2021/01/10/Offensive-Windows-IPC-1-NamedPipes.html
* https://sensepost.com/blog/2021/building-an-offensive-rpc-interface/
* https://itm4n.github.io/fuzzing-windows-rpc-rpcview/
* https://itm4n.github.io/from-rpcview-to-petitpotam/
* https://docs.microsoft.com/en-us/windows/win32/rpc/protocol-sequence-constants
