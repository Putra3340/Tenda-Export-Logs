#include <iostream>
#include <string>
#include "idk.h"

std::string getcmdline(std::string ip) {
    std::string rawcommand = "curl http://" + ip + "/cgi-bin/DownloadSyslog/RouterSystem.log";
    return rawcommand;
}