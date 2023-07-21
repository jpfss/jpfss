#include "CGI.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

#include <cgicc/CgiDefs.h>
#include <cgicc/Cgicc.h>
#include <cgicc/HTMLClasses.h>
#include <cgicc/HTTPHTMLHeader.h>
using namespace std;
using namespace cgicc;

CGI::CGI() {
  // ctor
}

CGI::~CGI() {
  // dtor
}

CGI::CGI(const CGI &other) {
  // copy ctor
}

CGI &CGI::operator=(const CGI &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void CGI::go() {

  cout << "++++++++++++++++++++++++++CPP's CGI++++++++++++++++++++++++++"
       << endl;
  // First CGI Program
  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Hello World - First CGI Program</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";
  cout << "<h2>Hello World! This is my first CGI program</h2>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // CGI Environment Variables
  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>CGI Environment Variables</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";
  cout << "<table border = \"0\" cellspacing = \"2\">";

  for (int i = 0; i < 24; i++) {
    cout << "<tr><td>" << ENV[i] << "</td><td>";

    // attempt to retrieve value of environment variable
    char *value = getenv(ENV[i].c_str());
    if (value != 0) {
      cout << value;
    } else {
      cout << "Environment variable does not exist.";
    }
    cout << "</td></tr>\n";
  }

  cout << "</table><\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // Simple URL Example: Get Method
  Cgicc formData;

  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Using GET and POST Methods</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";

  form_iterator fi = formData.getElement("first_name");
  if (!fi->isEmpty() && fi != (*formData).end()) {
    cout << "First name: " << **fi << endl;
  } else {
    cout << "No text entered for first name" << endl;
  }

  cout << "<br/>\n";
  fi = formData.getElement("last_name");
  if (!fi->isEmpty() && fi != (*formData).end()) {
    cout << "Last name: " << **fi << endl;
  } else {
    cout << "No text entered for last name" << endl;
  }

  cout << "<br/>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // Simple FORM Example: GET Method
  // Cgicc formData;
  bool maths_flag, physics_flag;

  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Checkbox Data to CGI</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";

  maths_flag = formData.queryCheckbox("maths");
  if (maths_flag) {
    cout << "Maths Flag: ON " << endl;
  } else {
    cout << "Maths Flag: OFF " << endl;
  }
  cout << "<br/>\n";

  physics_flag = formData.queryCheckbox("physics");
  if (physics_flag) {
    cout << "Physics Flag: ON " << endl;
  } else {
    cout << "Physics Flag: OFF " << endl;
  }

  cout << "<br/>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // Passing Radio Button Data to CGI program
  // Cgicc formData;

  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Radio Button Data to CGI</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";

  // form_iterator fi = formData.getElement("subject");
  if (!fi->isEmpty() && fi != (*formData).end()) {
    cout << "Radio box selected: " << **fi << endl;
  }

  cout << "<br/>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // Passing Text Area Data to CGI Program
  // cgicc formData;

  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Text Area Data to CGI</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";

  // form_iterator fi = formData.getElement("textcontent");
  if (!fi->isEmpty() && fi != (*formData).end()) {
    cout << "Text Content: " << **fi << endl;
  } else {
    cout << "No text entered" << endl;
  }

  cout << "<br/>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // Passing Drop down Box Data to CGI Program
  // Cgicc formData;

  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Drop Down Box Data to CGI</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";

  // form_iterator fi = formData.getElement("dropdown");
  if (!fi->isEmpty() && fi != (*formData).end()) {
    cout << "Value Selected: " << **fi << endl;
  }

  cout << "<br/>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // Setting up Cookies
  cout << "Set-Cookie:UserID = XYZ;\r\n";
  cout << "Set-Cookie:Password = XYZ123;\r\n";
  cout << "Set-Cookie:Domain = www.tutorialspoint.com;\r\n";
  cout << "Set-Cookie:Path = /perl;\n";
  cout << "Content-type:text/html\r\n\r\n";

  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Cookies in CGI</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";

  cout << "Setting cookies" << endl;

  cout << "<br/>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // Retrieving cookies
  Cgicc cgi;
  const_cookie_iterator cci;

  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>Cookies in CGI</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";
  cout << "<table border = \"0\" cellspacing = \"2\">";

  // get environment variables
  const CgiEnvironment &env = cgi.getEnvironment();

  for (cci = env.getCookieList().begin(); cci != env.getCookieList().end();
       ++cci) {
    cout << "<tr><td>" << cci->getName() << "</td><td>";
    cout << cci->getValue();
    cout << "</td></tr>\n";
  }

  cout << "</table><\n";
  cout << "<br/>\n";
  cout << "</body>\n";
  cout << "</html>\n";

  // File Upload Example
  // Cgicc cgi;

  cout << "Content-type:text/html\r\n\r\n";
  cout << "<html>\n";
  cout << "<head>\n";
  cout << "<title>File Upload in CGI</title>\n";
  cout << "</head>\n";
  cout << "<body>\n";

  // get list of files to be uploaded
  const_file_iterator file = cgi.getFile("userfile");
  if (file != cgi.getFiles().end()) {
    // send data type at cout.
    cout << HTTPContentHeader(file->getDataType());
    // write content at cout.
    file->writeToStream(cout);
  }
  cout << "<File uploaded successfully>\n";
  cout << "</body>\n";
  cout << "</html>\n";
}
