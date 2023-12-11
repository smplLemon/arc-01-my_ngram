#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 120


void array(int* arr, char* str){
    int i = 0;
    while(str[i] != '\0'){
    if(str[i] != ""){
        arr[(int)str[i]] += 1;
    }
    i += 1;
    }
}

int mystrlen(char* str){
    int length = 0;
    while(str[length] != '\0'){
        length += 1;
    }
    return length;
}

void print(int* arr, int size_arr){
    int i = 0;
    while(i < size_arr){
        if(arr[i] > 0){
            printf("%c:%i\n", i, arr[i]);
        }
        i += 1;
    }
}

int main(int argc, char** argv){
    int i = 1;
    int arr[MAX_ARRAY_SIZE] = {0};
    while(i < argc){
     array(&arr[0], argv[i]);
     i += 1;
    }
    print(&arr[0], MAX_ARRAY_SIZE);
    return EXIT_SUCCESS;
}