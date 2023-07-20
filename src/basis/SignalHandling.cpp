#include "SignalHandling.h"
#include <csignal>
#include <iostream>
using namespace std;

SignalHandling::SignalHandling() {
  // ctor
}

SignalHandling::~SignalHandling() {
  // dtor
}

SignalHandling::SignalHandling(const SignalHandling &other) {
  // copy ctor
}

SignalHandling &SignalHandling::operator=(const SignalHandling &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void SignalHandling::signalHandler(int signum) {

  cout << "Interrupt signal (" << signum << ") received.\n";

  // cleanup and close up stuff here
  // terminate program

  exit(signum);
}

void SignalHandling::go() {

  cout << "++++++++++++++++++++++++++CPP's Signal "
          "Handling(信号处理)++++++++++++++++++++++++++"
       << endl;

  // register signal SIGINT and signal handler
  signal(SIGINT, signalHandler);

  while (1) {
    cout << "Going to sleep...." << endl;
    sleep(1);
  }

  int i = 0;
  // register signal SIGINT and signal handler
  signal(SIGINT, signalHandler);

  while (++i) {
    cout << "Going to sleep...." << endl;
    if (i == 3) {
      raise(SIGINT);
    }
    sleep(1);
  }
}
