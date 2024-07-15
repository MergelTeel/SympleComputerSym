#include <iostream>
#include "ram.h"

void compure (int* buffer){
  int rezult=0;
  for (int i = 0; i < 8; ++i){
    rezult += *(buffer+i);
  }
  std::cout << "Compure rezult: " << rezult << std::endl;
}
