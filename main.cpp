#include <iostream>
#include <string>
#include "idk.h"

int main() {
	std::string ip;
	std::cout << "Tested On F609 model idk if it work with other model, make sure the router didn't have password" << std::endl << "Tenda Router IP: ";
	std::cin >> ip;
	std::string cmdline = getcmdline(ip);
	const char* constcmdline = cmdline.c_str();
	system(constcmdline);
	return 0;
}