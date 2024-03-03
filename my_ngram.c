#include<stdio.h> 
#include <stdlib.h> 
#define v 128 
int my_ngram(char* sad) 
{ 
    int alfa = 0; 
    while (sad[alfa] != 0) 
    
       alfa += 1; 
    
    return alfa; 
} 
void my_array(int* lib, char* str) 
{ 
    
    for (int betta = 0; str[betta] != 0; betta+=1) 
    
        if (str[betta] != '"') 
        
            lib[(int)str[betta]] += 1; 
 
} 
void print_array(int* long_array, int size_array) 
{ 
    
    for ( int i = 0; i< size_array; i+=1) 
     
        if(long_array[i] > 0) 
         
            printf("%c:%i\n", i, long_array[i]);      
} 
int main(int ac, char** av) 
{   
    int array[v] = {0}; 
    for ( int j = 1; j < ac; j++) 
     
        my_array(&array[0], av[j]); 
    
    print_array(&array[0], v); 
    return 0;
}