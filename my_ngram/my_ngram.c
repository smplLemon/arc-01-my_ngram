#include <stdio.h>
#include <stdlib.h>
#define VID_OBJECT_SIZE 128

int my_strlen(char *str) {
    int perfect = 0;

    while (str[perfect] != '\0') {
        perfect += 1;
    }
    return perfect;
}

void fill_array(int* array, char *str) {
    int perfect = 0;

    while (str[perfect] != '\0') {
        if (str[perfect] != '"') {
            array[(int)str[perfect]] += 1;
        }
        perfect += 1;
    }
}

void print_array(int *array, int size_array) {
    int index = 0;

    while (index < size_array) {
        if (array[index] > 0) {
            printf("%c:%d\n", index, array[index]);
        }
        index += 1;
    }
}

int find_max(int *array, int size_array) {
    int high_index = 0;
    int max_value = array[0];

    for (int perfect = 1; perfect < size_array; perfect++) {
        if (array[perfect] > max_value) {
            max_value = array[perfect];
            high_index = perfect;
        }
    }

    return high_index;
}

int main(int argc, char **argv) {
    int array[VID_OBJECT_SIZE] = {0};

    for (int perfect = 1; perfect < argc; perfect++) {
        fill_array(array, argv[perfect]);
    }
    print_array(array, VID_OBJECT_SIZE);

    int high_index = find_max(array, VID_OBJECT_SIZE);
    printf("max index: %d\n", high_index);

    return EXIT_SUCCESS;
}