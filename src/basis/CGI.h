#ifndef CGI_H
#define CGI_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class CGI {
public:
  CGI();
  virtual ~CGI();
  CGI(const CGI &other);
  CGI &operator=(const CGI &other);
  void go();

protected:
private:
  const string ENV[24] = {"COMSPEC",
                          "DOCUMENT_ROOT",
                          "GATEWAY_INTERFACE",
                          "HTTP_ACCEPT",
                          "HTTP_ACCEPT_ENCODING",
                          "HTTP_ACCEPT_LANGUAGE",
                          "HTTP_CONNECTION",
                          "HTTP_HOST",
                          "HTTP_USER_AGENT",
                          "PATH",
                          "QUERY_STRING",
                          "REMOTE_ADDR",
                          "REMOTE_PORT",
                          "REQUEST_METHOD",
                          "REQUEST_URI",
                          "SCRIPT_FILENAME",
                          "SCRIPT_NAME",
                          "SERVER_ADDR",
                          "SERVER_ADMIN",
                          "SERVER_NAME",
                          "SERVER_PORT",
                          "SERVER_PROTOCOL",
                          "SERVER_SIGNATURE",
                          "SERVER_SOFTWARE"};
};

#endif // CGI_H
