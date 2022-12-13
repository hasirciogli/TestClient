

namespace Packets
{
	namespace NServerPackets
	{
		enum EFromServerToClient
		{
			FIRST_AUTH,
			USER_AUTH
		};
	};

	namespace NClientPackets
	{
		enum EFromClientToServer
		{
			FIRST_AUTH,
			USER_AUTH
		};
	};
};