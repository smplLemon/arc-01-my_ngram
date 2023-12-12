#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char character = ' ';

    while (character <= 'z') {
        int count = 0;
        int i = 1;

        while (i < argc) {
            int j = 0;
            while (j < strlen(argv[i])) {
                if (character == argv[i][j]) {
                    count++;
                }
                j++;
            }
            i++;
        }

        if (count) {
            printf("%c:%d\n", character, count);
        }

        character++;
    }

    return 0;
}