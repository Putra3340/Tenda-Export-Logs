#include <iostream>
#include <string>
#include "idk.h"

void writefile(std::string setcommand,std::string savedfilename) {
	// instead using fstream, im using batch command 200+ IQ
	std::string savingcommand = setcommand + ">" + savedfilename;
	const char* savecmd = savingcommand.c_str();
	system(savecmd);
}

int main() {
	std::string ip,setcommand,writeaction; int action;
	std::cout << "Tested On F609 model idk if it work with other model, make sure the router didn't have password" << std::endl << "Tenda Router IP: ";
	std::cin >> ip;
	std::cout << "1.Get Router Log" << std::endl << "2.Backup Router Configuration" << std::endl << "-> ";
	std::cin >> action;
	setcommand = act(ip,action);
	const char* constcmdline = setcommand.c_str();
	system(constcmdline);
	std::cout << std::endl << "Save the file? (yes/no)" << std::endl << "-> ";
	std::cin >> writeaction;
	if (writeaction=="yes")
	{
		std::string savedfilename;
		std::cout << "File name (with extension) : ";
		std::cin >> savedfilename;
		writefile(setcommand, savedfilename);
	}

	return 0;
}