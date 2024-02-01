#include <stdio.h>

int main(int argc, char* argv[]) {
    int wer[64] = {0};

    for (int i = 1; i < argc; i++) {
        for (int a = 0; argv[i][a] != 0; a++) {
            wer[(int)argv[i][a]]++;
        }
    }

    for (int ter = 0; ter < 64; ter++) {
        if (wer[ter] > 0) {
            printf("%c:%d\n", ter, wer[ter]);
        }
    }

    return 0;
}
