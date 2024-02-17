#include <stdio.h>
#include <ctype.h>

#define SIZE 200

void my_ngram(int nuk, char** sss)
{
    int a = 0;
    int b = 0;
    int count[SIZE] = {0};

    for (int i = 1; i < nuk; i++)
    {
        for (b = 0; sss[i][b] != '\0'; b++)
        {
            a = sss[i][b];
            count[(unsigned char)a]++;
        }
    }

    for (int a = 0; a < SIZE; a++)
    {
        if (count[a])
        {
            printf("%c: %d\n", a, count[a]);
        }
    }
}
int main(int argc, char **argv)
{
    my_ngram(argc, argv);
    return 0;
}
