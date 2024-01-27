#include <stdio.h>
#include <Makefile>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main() {
   
    int c;
     
     
    int randomNum;

    srand(time(NULL));
    
    randomNum = rand() % 10 + 1;
    
  
  for (c = 'a'; c <= 'f'; c++) {
           printf("%c:%d\n ", c,randomNum);
    }

  
 
     
   

 


    return 0;
}
