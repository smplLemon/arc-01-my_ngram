#include <stdio.h> 
#include <stdlib.h> 

#define MAX_ARRAY_SIZE 128 

int my_strlen(char* string) 
{ 
    int i = 0; 
    while (string[i] != '\0'){ 
        i += 1; 
    } 
    return i; 
} 
void fill_array(int* array, char* str) 
{ 
    int ind = 0; 
    while (str[ind] != '\0'){ 
        if (str[ind] != '"'){ 
            array[(int)str[ind]] += 1; 
        } 
        ind +=1; 
    } 

} 
void print_array(int* array, int str_array) 
{ 
    int index = 0; 

    while (index < str_array){ 
        if (array[index] > 0){ 
            printf("%c:%i\n", index, array[index]); 
        } 
        index += 1; 
    } 
} 
int main(int argc, char** argv) 
{ 
    int index = 1; 
    int array[MAX_ARRAY_SIZE] = {0}; 
    while (index < argc){ 
        fill_array(&array[0], argv[index]); 
        index += 1; 
    } 
    print_array(&array[0], MAX_ARRAY_SIZE); 
    return EXIT_SUCCESS; 
}