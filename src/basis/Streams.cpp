#include "Streams.h"
#include <fstream>
#include <iostream>
using namespace std;

Streams::Streams() {
  // ctor
}

Streams::~Streams() {
  // dtor
}

void Streams::go() {

  cout << "++++++++++++++++++++++++++CPP's Files and "
          "Streams++++++++++++++++++++++++++"
       << endl;
  char data[100];

  // open a file in write mode.
  ofstream outfile;
  outfile.open("afile.dat");

  cout << "Writing to the file" << endl;
  cout << "Enter your name: ";
  cin.getline(data, 100);

  // write inputted data into the file.
  outfile << data << endl;

  cout << "Enter your age: ";
  cin >> data;
  cin.ignore();

  // again write inputted data into the file.
  outfile << data << endl;

  // close the opened file.
  outfile.close();

  // open a file in read mode.
  ifstream infile;
  infile.open("afile.dat");

  cout << "Reading from the file" << endl;
  infile >> data;

  // write the data at the screen.
  cout << data << endl;

  // again read the data from the file and display it.
  infile >> data;
  cout << data << endl;

  // close the opened file.
  infile.close();

  // File Position Pointer
  // position to the nth byte of fileObject (assumes ios::beg)
  int n = 10;

  // position to the nth byte of fileObject (assumes ios::beg)
  infile.seekg(n);

  // position n bytes forward in fileObject
  infile.seekg(n, ios::cur);

  // position n bytes back from end of fileObject
  infile.seekg(n, ios::end);

  // position at end of fileObject
  infile.seekg(0, ios::end);
}
