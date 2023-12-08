#include <stdio.h>

int my_strlen(char* arr) {
    int count = 0;
    while (*arr != '\0') {
        count++;
        arr++;
    }
    return count;
}

int letters[128] = {0};

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < my_strlen(argv[i]); j++) {
            letters[(int) argv[i][j]]++;
        }
    }

    for (int i = 0; i < 128; i++) {
        if (letters[i] > 0) {
            printf("%c:%d\n", (char) i, letters[i]);
        }
    }
}
