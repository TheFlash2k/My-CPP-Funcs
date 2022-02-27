// All the usage methods are defined in this file

/* SOME BASIC INCLUDES */
#include <iostream>
#include <string>

#include "resolve_host_to_ip_linux.cpp"
#include "check_if_valid_ip_cross.cpp"

int main(int argc, char* argv[]) {


  // Check if entered IP is a valid IP:
  std::cout << "isValidIP(\"192.168.0.105\") : " << std::boolalpha <<
    isValidIP("192.168.0.105")
  << std::endl;

  // Resolving a host to a specific ip Address:
  std::cout << "resolveHost(\"google.com\") : "  <<
    resolveHost("google.com")
  << std::endl;

  

  return 0;
}
