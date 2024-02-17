#include <stdio.h>
#include <ctype.h>

#define SIZE 128

void my_ngram(int ac, char** av)
{
    int ch = 0;
    int j = 0;
    int count[SIZE] = {0};

    for (int i = 1; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            ch = av[i][j];
            count[(unsigned char)ch]++;
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
