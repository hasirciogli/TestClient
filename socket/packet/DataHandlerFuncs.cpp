#include "DataHandler.h"
using namespace nlohmann;
using namespace std;


void CDataHandlerFuncs::FirstAuth(std::string fullData)
{
	json faj = json::parse(fullData);

	int packetID	= faj["packet_id"];
	string dataFull = faj["data"];
	int dataFull	= faj["data"];
}

void CDataHandlerFuncs::UserAuth(std::string fullData)
{
	
}
