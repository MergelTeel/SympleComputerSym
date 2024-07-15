#include <iostream>
#include "kbd.h"
#include "disk.h"
#include "gpu.h"
#include "cpu.h"
#include "ram.h"
using namespace std;
int main() {
  string command;
  do{
    cout << "Enter command\n";
    cin >> command;

    if(command == "compure"){
      compure(read());
    } else if(command == "input"){
      input(write());
    } else if(command == "save"){
      save();
    } else if(command == "load"){
      load(write());
    } else if(command == "output"){
      output();
    }
    
  } while(command != "close");
}