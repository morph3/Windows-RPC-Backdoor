

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for rpc_backdoor_server.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include "rpc_backdoor_server.h"

#define TYPE_FORMAT_STRING_SIZE   11                                
#define PROC_FORMAT_STRING_SIZE   39                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _rpc_backdoor_server_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } rpc_backdoor_server_MIDL_TYPE_FORMAT_STRING;

typedef struct _rpc_backdoor_server_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } rpc_backdoor_server_MIDL_PROC_FORMAT_STRING;

typedef struct _rpc_backdoor_server_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } rpc_backdoor_server_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const rpc_backdoor_server_MIDL_TYPE_FORMAT_STRING rpc_backdoor_server__MIDL_TypeFormatString;
extern const rpc_backdoor_server_MIDL_PROC_FORMAT_STRING rpc_backdoor_server__MIDL_ProcFormatString;
extern const rpc_backdoor_server_MIDL_EXPR_FORMAT_STRING rpc_backdoor_server__MIDL_ExprFormatString;

/* Standard interface: BackdoorInterface, ver. 1.0,
   GUID={0x7a5e41fd,0xa31f,0x4892,{0x8e,0x9f,0x76,0xe5,0xf0,0xcb,0x25,0x1e}} */


extern const MIDL_SERVER_INFO BackdoorInterface_ServerInfo;

extern const RPC_DISPATCH_TABLE BackdoorInterface_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE BackdoorInterface___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x7a5e41fd,0xa31f,0x4892,{0x8e,0x9f,0x76,0xe5,0xf0,0xcb,0x25,0x1e}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&BackdoorInterface_v1_0_DispatchTable,
    0,
    0,
    0,
    &BackdoorInterface_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE BackdoorInterface_v1_0_s_ifspec = (RPC_IF_HANDLE)& BackdoorInterface___RpcServerInterface;

extern const MIDL_STUB_DESC BackdoorInterface_StubDesc;


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const rpc_backdoor_server_MIDL_PROC_FORMAT_STRING rpc_backdoor_server__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure backdoor */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14 */	0x43,		/* Oi2 Flags:  srv must size, clt must size, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter in_str */

/* 26 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter out_str */

/* 32 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 34 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 36 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

			0x0
        }
    };

static const rpc_backdoor_server_MIDL_TYPE_FORMAT_STRING rpc_backdoor_server__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  8 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short BackdoorInterface_FormatStringOffsetTable[] =
    {
    0
    };


static const MIDL_STUB_DESC BackdoorInterface_StubDesc = 
    {
    (void *)& BackdoorInterface___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    rpc_backdoor_server__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

static const RPC_DISPATCH_FUNCTION BackdoorInterface_table[] =
    {
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE BackdoorInterface_v1_0_DispatchTable = 
    {
    1,
    (RPC_DISPATCH_FUNCTION*)BackdoorInterface_table
    };

static const SERVER_ROUTINE BackdoorInterface_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)backdoor
    };

static const MIDL_SERVER_INFO BackdoorInterface_ServerInfo = 
    {
    &BackdoorInterface_StubDesc,
    BackdoorInterface_ServerRoutineTable,
    rpc_backdoor_server__MIDL_ProcFormatString.Format,
    BackdoorInterface_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

