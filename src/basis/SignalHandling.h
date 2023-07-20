#ifndef SIGNALHANDLING_H
#define SIGNALHANDLING_H

class SignalHandling {
public:
  SignalHandling();
  virtual ~SignalHandling();
  SignalHandling(const SignalHandling &other);
  SignalHandling &operator=(const SignalHandling &other);
  static void signalHandler(int signum);
  void go();

protected:
private:
};

#endif // SIGNALHANDLING_H
