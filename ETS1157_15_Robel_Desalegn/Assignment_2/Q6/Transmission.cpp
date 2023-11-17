// This program calculates how long it takes to send a file based on file size input 
#include <iostream>
using namespace std;

int main()
 {
  double fileSize, transRate {960}, transTime;

  cout << "Enter file size in MB: ";
  cin >> fileSize;

  // Convert files' size to bytes
  fileSize = fileSize * 1024 * 1024;

  transTime = fileSize / transRate;

  cout << "Time to transmit a " << fileSize << " byte file at "  
       << transRate << " characters per second: " 
       << transTime << " seconds" << endl;

  return 0;
}