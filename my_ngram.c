#include <stdio.h>
#include <string.h>

int my_str(char* str) 
{
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void pCFreq(int argc, char* argv[]) 
{
    int con[128] = {0};

    for (int i = 1; i < argc; i++) {
        int n = my_str(argv[i]);
        for (int j = 0; j < n; j++) {
            con[(int)argv[i][j]]++;
        }
    }

    for (int i = 0; i < 128; i++) {
        if (con[i] > 0) {
            printf("%c:%d\n", i, con[i]);
        }
    }
}

int main(int argc, char *argv[]) 
{
    pCFreq(argc, argv);
    return 0;
}
