#ifndef THREADS_H
#define THREADS_H

class Threads {
public:
  Threads();
  virtual ~Threads();
  Threads(const Threads &other);
  Threads &operator=(const Threads &other);
  static void *printHello(void *threadid);
  static void *wait(void *t);
  struct thread_data {
    int thread_id;
    char *message;
  };
  void go();

protected:
private:
};

#endif // THREADS_H
