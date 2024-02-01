#include <stdio.h> 
#include <string.h>
#include <stdlib.h> 
 
#define MAX_ARR_SIZE 128 
 
int my_strlen(char* str) 
{ 
    int i = 0; 
    while (str[i] != 0) 
    { 
        i += 1; 
    } 
    return i; 
} 
void arr_fun(int* arr, char* str) 
{ 
    int index = 0; 
    while (str[index] != 0) 
    { 
        if (str[index] != '"') 
        { 
            arr[(int)str[index]] += 1; 
        } 
        index += 1; 
    } 
 
} 
void printf_arr(int* arr, int size_arr) 
{ 
    int index = 0; 
    
    while (index < size_arr) 
    { 
        if (arr[index] > 0) 
        { 
            printf("%c:%i\n", index, arr[index]); 
        } 
        index += 1; 
    } 
} 
int main(int argc, char** argv) 
{ 
    int index = 1; 
    int arr[MAX_ARR_SIZE] = {0}; 
    while (index < argc) 
    { 
        arr_fun(&arr[0], argv[index]); 
        index += 1; 
    } 
    printf_arr(&arr[0], MAX_ARR_SIZE); 
    return EXIT_SUCCESS; 
}