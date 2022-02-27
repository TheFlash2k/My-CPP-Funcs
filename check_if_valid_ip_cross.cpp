#pragma once

#include <string>
#include <regex>

bool isValidIP(std::string ip) {
  std::regex regex(R"(^((25[0-5]|(2[0-4]|1\d|[1-9]|)\d)(\.(?!$)|$)){4}$)");
  std::smatch reg_ret;
  std::regex_search(ip, reg_ret, regex);
  std::string val = reg_ret[0];
  return (val != "");
}
