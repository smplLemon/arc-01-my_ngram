#include <stdio.h>
#include <string.h>

int my_strlen(char* arr) {
    int count = 0;
    int i = 0;
    while (arr[i] != '\0') {
        i++;
        count++;
    }
    return count;
}

void count_letters(int argc, char* argv[]) {
    int letters[256] = {0};

    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < my_strlen(argv[i]); j++) {
            letters[(int)argv[i][j]]++;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (letters[i] > 0) {
            printf("%c:%d\n", i, letters[i]);
        }
    }
}


int main(int argc, char* argv[]) {
    count_letters(argc, argv);
    return 0;
}