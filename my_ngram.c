#include <stdio.h>
#include <unistd.h>

void count(char* text) {
    int counts[128] = {0};

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        counts[(unsigned char)c]++;
    }

    for (int i = 0; i < 128; i++) {
        if (counts[i] > 0) {
            char output[64];
            int len = sprintf(output, "%c:%d\n", (char)i, counts[i]);
            write(1, output, len);
        }
    }
}

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        count(argv[i]);
    }

    return 0;
}

