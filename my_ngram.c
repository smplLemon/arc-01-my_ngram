#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

#define MAX_ARRAY_SIZE 128 





void numArray(int* array, char* str) 
{ 
    int i = 0; 

    while (str[i] != '\0')
    { 
        if (str[i] != '"')
        { 
            array[(int)str[i]] += 1; 
        } 
             i += 1; 
    } 

}



int mystrlen(char* str) 
{ 
    int length = 0; 

 while (str[length] != '\0')
    { 
        length += 1; 
    } 
        return length; 
} 




void printArray(int* arr, int arr2) 
{ 
    int i = 0; 

    while (arr2 > i)
    { 
        if (arr[i] > 0)
        { 
            printf("%c:%i\n", i, arr[i]); 
        } 
            i += 1; 
    } 
} 




int main(int argc, char** argv) 
{ 
    int index = 1; 

    int array[MAX_ARRAY_SIZE] = {0}; 

    while (index < argc)
    { 
        numArray(&array[0], argv[index]); 
        index += 1; 
    } 

       printArray(&array[0],  MAX_ARRAY_SIZE); 

       return EXIT_SUCCESS; 
}