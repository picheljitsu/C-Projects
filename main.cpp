#include <stdio.h>
#include <sstream>
#include <string>
#include "wmiEvhead.h"
#include "EventSink.h"
#include "thread"
using namespace std;

//int initSecurity()
//{
//	HRESULT hres;
//
//	// Initialize COM
//	hres = CoInitializeEx(0, COINIT_MULTITHREADED);
//	if (FAILED(hres))
//	{
//		cout << "Failed to initialize COM library. Error code = 0x"
//			<< hex << hres << endl;
//		return 1;
//	}
//
//	// Set general COM security levels --------------------------
//	hres = CoInitializeSecurity(
//		NULL,
//		-1,                          // COM authentication
//		NULL,                        // Authentication services
//		NULL,                        // Reserved
//		RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication 
//		RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation  
//		NULL,                        // Authentication info
//		EOAC_NONE,                   // Additional capabilities 
//		NULL                         // Reserved
//	);
//
//	if (FAILED(hres))
//	{
//		cout << "Failed to initialize security. Error code = 0x"
//			<< hex << hres << endl;
//		CoUninitialize();
//		return 1;
//	}
//	return 0;
//}

int main()
{

	while (true)
	{
		std::stringstream g;
		g << getConnectInfo();
		std::string output = g.str();
		cout << output;
		std::this_thread::sleep_for(1s);
		clear();

	}
	return 0;
}
