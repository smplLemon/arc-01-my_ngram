#include <stdio.h>
#include <string.h>

int mystr(char* str) 
{
    int len = 0;
    while(str[len] != '\0') {
        len++;
    }
    return len;
}

void char1(char* str) 
{
    int con[1000] = {0};
    int n = mystr(str);

    for (int i = 0; i < n; i++)
        con[(int)str[i]]++;

    for (int i = 0; i < 1000; i++)
        if (con[i] > 0)
            printf("%c:%d\n", i, con[i]);
}

int main(int argc, char *argv[]) 
{
    for (int i = 1; i < argc; i++)
        char1(argv[i]);

    return 0;
}