#include <stdio.h>
#include <stdlib.h>
#define VID_OBJECT_SIZE 128

int my_strlen(char *a1) {
    int k = 0;

    while (a1[k] != '\0') {
        k += 1;
    }
    return k;
}

void fill_array(int* array, char * ngram) {
    int j = 0;

    while (ngram[j] != '\0') {
        if (ngram[j] != '"') {
            array[(int)ngram[j]] += 1;
        }
        j += 1;
    }
}

void print_array(int * array, int size_array) {
    int ab = 0;

    while (ab < size_array) {
        if (array[ab] > 0) {
            printf("%c:%d\n", ab, array[ab]);
        }
        ab += 1;
    }
}

int main(int ql, char **rs) {
    int ab = 1;
    int array[VID_OBJECT_SIZE] = {0};

    while (ab < ql) {
        fill_array(&array[0], rs[ab]);
        ab += 1;
    }
    print_array(&array[0], VID_OBJECT_SIZE);

    return 0;
}