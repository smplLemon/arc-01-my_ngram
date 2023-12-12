#include <stdio.h>

int str_len(char *s) {
    int s_count = 0;
    int i = 0;

    while (s[i] != '\0') {
        s_count++;
        i++;
    }

    return s_count;
}

void my_ngram(int ac, char *av[]) {
    int iteration[256] = {0};
    int i,k;

    for (i = 1; i < ac; i++) {
        int av_len = str_len(av[i]);

        for (k = 0; k < av_len; k++) {
            iteration[av[i][k]]++;
        }
    }

    for (i = 0; i < 256; i++) {
        if (iteration[i] >= 1) {
            printf("%c:%d\n", i, iteration[i]);
        }
    }
}

int main(int argc, char **argv) {
    if (argc <= 1) {
        printf("%s", argv[0]);
        return 0;
    }

    my_ngram(argc, argv);

    return 0;
}
