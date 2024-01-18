#include <stdio.h>
#include <stdlib.h>
#define VID_OBJECT_SIZE 128

int my_strlen(char *jasurbek2) {
    int sum = 0;
    for (int i =0;jasurbek2[i] != '\0';i++) {
        sum += 1;
    }
    return sum;
}

void fill_array(int* array, char * jasurbek2) {
    int i =0;
    while (jasurbek2[i] != '\0') {
    if(jasurbek2[i] != '"'){
        array[(int)jasurbek2[i]] +=1;
    }
    i += 1;
    }
}

void print_array(int * array, int size_array) {
    int ba = 0;
    while (ba < size_array) {
        if(array[ba] > 0){
            printf ("%c:%d\n", ba, array[ba]);
        }
        ba += 1;
    }
}

int main(int kamolov ,char **jasur) {
    int counter = 1;
    int array[VID_OBJECT_SIZE] = {0};


    while (counter < kamolov) {
        fill_array(&array[0], jasur [counter]);
        counter +=1;
    }
    print_array(&array[0], VID_OBJECT_SIZE);
        return EXIT_SUCCESS;
}
