#include <iostream>
#include <fstream>
#include "ram.h"

void save(){
  std:: ofstream savefile("/data/diskData.txt");
  for(int i= 0; i < 8; ++i){
    savefile << *(read()+i) << "\n";
  }
  std::cout <<"File saved\n";
}
void load(int* buffer){
  std:: ifstream loadfile;
  loadfile.open("/data/diskData.txt");
  if(loadfile.is_open()){
    for(int i = 0; i < 8; ++i){
      loadfile >> *(buffer+i);
    }  
    loadfile.close();
    std::cout << "File load\n";
  } else{
    std::cout << "File not found\n";
  }
  
}