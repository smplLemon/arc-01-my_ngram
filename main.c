#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(char *param_1) {
    int i = 0;
    while (param_1[i] != '\0') {
        i++;
    }
    return i;
}

char *my_downcase(char *param_1) {
    char *start_str = param_1;
    while (*param_1 != '\0') {
        if (*param_1 >= 'A' && *param_1 <= 'Z') {
            *param_1 = *param_1 + 32;
        }
        param_1++;
    }
    return start_str;
}

void my_ngram(char *arr, int size) {

    arr = my_downcase(arr);
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            char temp = arr[i];
            if (temp == arr[j]) {
                count++;
            }
        }
        printf("%c:%d\n", arr[i], count);
        i += count - 1;
    }
}

int main(int argc, char **argv) {

    int len = 0;
    for (int i = 1; i < argc; i++) {
        len += my_strlen(argv[i]);
    }

    char *arr = malloc((len + 1) * sizeof(char));

    int position = 0;
    for (int i = 1; i < argc; i++) {
        strcpy(arr + position, argv[i]);
        position += my_strlen(argv[i]);
    }
    arr[len] = '\0';

    my_ngram(arr, len);

    free(arr);
    return 0;
}
