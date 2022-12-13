#define WIN32_LEAN_AND_MEAN
#include "socket/msoket.h"

#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>


using namespace std;
using namespace nlohmann::json_abi_v3_11_2;


const char* bErr = "";

int main()
{

	if (!mSocket::initSoket(&bErr))
		cout << "Socket initialize failed to = " << bErr << endl;
	bool yisent = false;

	while (!GetAsyncKeyState(VK_XBUTTON2))
	{
		if (mSocket::cfg::socketIsConnected && !yisent)
		{
			json cheatLoginHwid = {
				{
					"packet_id", 1
				},
				{
					"data", {
						{"hwid"	, "9963"}
					}

				},
			};

			std::string bakbe = cheatLoginHwid.dump();
			cout << bakbe << bErr << endl;

			if (!mSocket::sendPacketToServer(bakbe.c_str(), &bErr))
				cout << "Socket send failed to = " << bErr << endl;

			yisent = true;
		}

		Sleep(1000);
	}


	if (!mSocket::cleanup())
		cout << "Socket cleanup failed to = " << bErr << endl;
	
    return 0;
}