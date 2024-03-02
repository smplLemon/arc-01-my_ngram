#include <stdio.h>

void count(int item_amounts[], char *p) {
    for(int j = 0; (int)p[j] != '\0'; j++) {
        item_amounts[(int)p[j]]++;
    }
}

int main(int argc, char **argv) {
    int item_amounts[127] = {0};

    printf("%d\n", argc);

    for(int i = 0; i < argc; i++) {
        count(item_amounts, argv[i]);
        printf("\n");
    }

    for(int i = 0; i < 127; i++) {
        if(item_amounts[i] > 0) {
            printf("%c: %d\n", i, item_amounts[i]);
        }
    }

    return 0;
}