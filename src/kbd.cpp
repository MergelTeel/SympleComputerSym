# include <iostream>
# include "ram.h"
 void input(int* buffer){
  
   for(int i = 0; i < 8; ++i){
     std::cin >> *(buffer+i);
      
    }
   
 }