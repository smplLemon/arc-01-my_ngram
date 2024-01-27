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

void pCFreq(char* str) 
{
    int con[128] = {0};
    int n = my_str(str);

    for (int i = 0; i < n; i++) {
        con[(int)str[i]]++;
    }

    for (int i = 0; i < 128; i++) {
        if (con[i] > 0) {
            printf("%c:%d\n", i, con[i]);
        }
    }
}

int main(int argc, char *argv[]) 
{
    for (int i = 1; i < argc; i++) {
        pCFreq(argv[i]);
    }

    return 0;
}
