#include <stdio.h>
#include <string.h>

void count_chars(const char *text) {
    int count[256] = {0};

    for (const char *a = text; *a; a++) {
        count[(unsigned char)*a]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i, count[i]);
        }
    }
}

int main(int trd, char *vtrd[]) {
    for (int i = 1; i < trd; i++) {
        count_chars(vtrd[i]);
    }

    return 0;
}