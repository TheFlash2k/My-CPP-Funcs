#include <string>
#include <netdb.h>
#include <arpa/inet.h>


std::string resolveHost(std::string hostname) {
    struct hostent *he;
    he = gethostbyname (hostname.c_str());
    if (he == NULL) {
        switch (h_errno) {
          case HOST_NOT_FOUND:
              return "";
          case NO_ADDRESS:
              return "";
          case NO_RECOVERY:
              return "";
          case TRY_AGAIN:
              return "";
        }
    }
    return (inet_ntoa (*((struct in_addr *) he->h_addr_list[0])));
}
