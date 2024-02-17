#include <stdio.h>
#include <ctype.h>

#define SIZE 256

void my_ngram(int acha, char** avch)
{
    int jar = 0;
    int count[SIZE] = {0};

    for (int i = 1; i < acha; i++)
    {
        for (jar = 0; avch[i][jar] != '\0'; jar++)
        {
            count[(unsigned char)avch[i][jar]]++;
        }
    }

    for (int c = 0; c < SIZE; c++)
    {
        if (count[c] > 0)
        {
            printf("%c:%d\n", c, count[c]);
        }
    }
}
int main(int muh, char **tuh)
{
    my_ngram(muh, tuh);
    return 0;
}