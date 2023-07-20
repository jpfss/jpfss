#include "Threads.h"
#include <cstdlib>
#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;

Threads::Threads() {
  // ctor
}

Threads::~Threads() {
  // dtor
}

Threads::Threads(const Threads &other) {
  // copy ctor
}

Threads &Threads::operator=(const Threads &rhs) {
  if (this == &rhs)
    return *this; // handle self assignment
  // assignment operator
  return *this;
}

void *Threads::printHello(void *threadid) {

  long tid;
  tid = (long)threadid;
  cout << "Hello World! Thread ID, " << tid << endl;
  pthread_exit(NULL);
  // Passing Arguments to Threads
  struct thread_data *my_data;
  my_data = (struct thread_data *)threadid;

  cout << "Thread ID : " << my_data->thread_id;
  cout << " Message : " << my_data->message << endl;

  pthread_exit(NULL);
}

// Joining and Detaching Threads
void *Threads::wait(void *t) {

  int i;
  long tid;

  tid = (long)t;

  sleep(1);
  cout << "Sleeping in thread " << endl;
  cout << "Thread with id : " << tid << "  ...exiting " << endl;
  pthread_exit(NULL);
}

#define NUM_THREADS 5
void Threads::go() {

  cout << "++++++++++++++++++++++++++CPP's Threads++++++++++++++++++++++++++"
       << endl;
  pthread_t threads[NUM_THREADS];
  int rc;
  int i;

  for (i = 0; i < NUM_THREADS; i++) {
    cout << "main() : creating thread, " << i << endl;
    rc = pthread_create(&threads[i], NULL, printHello, (void *)i);

    if (rc) {
      cout << "Error:unable to create thread," << rc << endl;
      exit(-1);
    }
  }
  pthread_exit(NULL);

  // Passing Arguments to Threads
  for (i = 0; i < NUM_THREADS; i++) {
    cout << "main() : creating thread, " << i << endl;
    rc = pthread_create(&threads[i], NULL, printHello, (void *)i);

    if (rc) {
      cout << "Error:unable to create thread," << rc << endl;
      exit(-1);
    }
  }
  pthread_exit(NULL);

  // Passing Arguments to Threads
  struct thread_data td[NUM_THREADS];
  for (i = 0; i < NUM_THREADS; i++) {
    cout << "main() : creating thread, " << i << endl;
    td[i].thread_id = i;
    td[i].message = "This is message";
    rc = pthread_create(&threads[i], NULL, printHello, (void *)&td[i]);

    if (rc) {
      cout << "Error:unable to create thread," << rc << endl;
      exit(-1);
    }
  }
  pthread_exit(NULL);

  // Joining and Detaching Threads
  pthread_attr_t attr;
  void *status;

  // Initialize and set thread joinable
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

  for (i = 0; i < NUM_THREADS; i++) {
    cout << "main() : creating thread, " << i << endl;
    rc = pthread_create(&threads[i], &attr, wait, (void *)i);
    if (rc) {
      cout << "Error:unable to create thread," << rc << endl;
      exit(-1);
    }
  }

  // free attribute and wait for the other threads
  pthread_attr_destroy(&attr);
  for (i = 0; i < NUM_THREADS; i++) {
    rc = pthread_join(threads[i], &status);
    if (rc) {
      cout << "Error:unable to join," << rc << endl;
      exit(-1);
    }
    cout << "Main: completed thread id :" << i;
    cout << "  exiting with status :" << status << endl;
  }

  cout << "Main: program exiting." << endl;
  pthread_exit(NULL);
}
