#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 130

int mystrlen(char* str) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
        str++;
    }
    return length;
}

int Text(int* array, char* str) {
    
for(int i=0; str[i] != '\0'; i++) {
    if(str[i] != "") {
        array[(int)str[i]]+= 1;
     }
   }
}

int print(int* arr, int arr_size) {
    for(int value = 0; value < arr_size; value++) {
        if(arr[value] > 0) {
            printf("%c:%d\n", value, arr[value]);
        }
    }
}


int main(int argc, char** argv) {
    int num = 0;
    int arr[MAX_ARRAY_SIZE] = {0};
    
while(num < argc){
    Text(&arr[0], argv[num]);
    num += 1;
}
    print(&arr[0], MAX_ARRAY_SIZE);
    return EXIT_SUCCESS;
}