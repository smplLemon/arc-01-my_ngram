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

void fill_array(int* array, char * point) {
    int j = 0;

    while (point[j] != '\0') {
        if (point[j] != '"') {
            array[(int)point[j]] += 1;
        }
        j += 1;
    }
}

void print_array(int * array, int size_array) {
    int cat = 0;

    while (cat < size_array) {
        if (array[cat] > 0) {
            printf("%c:%d\n", cat, array[cat]);
        }
        cat += 1;
    }
}

int main(int ios, char **print) {
    int cat = 1;
    int array[VID_OBJECT_SIZE] = {0};

    while (cat < ios) {
        fill_array(&array[0], print[cat]);
        cat += 1;
    }
    print_array(&array[0], VID_OBJECT_SIZE);

    return 0;
}