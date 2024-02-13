#include <stdio.h>
#include <ctype.h>

#define SIZE 256

void my_ngram(int ac, char** av)
{
    int jar = 0;
    int count[SIZE] = {0};

    for (int i = 1; i < ac; i++)
    {
        for (jar = 0; av[i][jar] != '\0'; jar++)
        {
            count[(unsigned char)av[i][jar]]++;
        }
    }

    for (int c = 0; c < SIZE; c++)
    {
        if (count[c] > 0)
        {
            printf("%c: %d\n", c, count[c]);
        }
    }
}
int main(int xam, char **yam)
{
    my_ngram(xam, yam);
    return 0;
}