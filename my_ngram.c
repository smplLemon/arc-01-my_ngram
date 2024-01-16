#include <stdio.h>  
#include <string.h>   
#include <stdlib.h>  
  
int* store_arr(int* store_1 , char* argv){  
    int sum = 0;  
    for (int i = 0; argv[i] != 0; i++) {  
      
    sum = argv[i];  
    store_1[sum]+= 1;  
    }  
    return store_1;  
}  
  
void print_store(int* store_2) {  
    for (int i = 0; i < 128; i++) {  
        if(store_2[i] > 0){  
            printf("%c:%d\n", (char)i, store_2[i]);  
        }  
    }  
}  
  
int main(int argc, char** argv) {  
    int* store = calloc(sizeof(int), 128);  
 
      
    for (int count = 1; count < argc; count++) {  
        store = store_arr(store, argv[count]);  
    }  
    print_store(store);  
  
    return 0;  
}
