#include <stdio.h>
#include <stdlib.h>
#define VID_OBJECT_SIZE 128

int my_strlen(const char *str) {
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}

void fill_array(int *array, const char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != '"') {
            array[(int)str[i]] += 1;
        }
        i += 1;
    }
}

void print_array(const int *array, int size_array) {
    int index = 0;
    while (index < size_array) {
        if (array[index] > 0) {
            printf("%c:%d\n", (char)index, array[index]);
        }
        index += 1;
    }
}

int find_max(const int *array, int size_array) {
    int max_index = 0;
    int max_value = array[0];

    for (int i = 1; i < size_array; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
            max_index = i;
        }
    }

    return max_index;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int bg = 1;
    int array[VID_OBJECT_SIZE] = {0};

    while (bg < argc) {
        fill_array(array, argv[bg]);
        bg += 1;
    }

    print_array(array, VID_OBJECT_SIZE);

    int max_index = find_max(array, VID_OBJECT_SIZE);
    printf("%c (%d)", (char)max_index, array[max_index]);

    return EXIT_SUCCESS;
}
