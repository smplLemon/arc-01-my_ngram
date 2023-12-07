#include <stdio.h>

#define MAX_CHARACTERS 128

int my_strlen(char* arr) {
    int count = 0;
    while (*arr != '\0') {
        count++;
        arr++;
    }
    return count;
}

int letters[MAX_CHARACTERS] = {0};

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            letters[(int)argv[i][j]]++;
            }
        }
        
    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (letters[i] > 0) {
            printf("%c:%d\n", (char)i, letters[i]);
        }
    }
    return 0;
}
