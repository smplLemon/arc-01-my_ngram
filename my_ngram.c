#include <stdio.h>
#include <ctype.h>

#define SIZE 256

void my_ngram(int arg_c, char** arg_v)
{
    int jar = 0;
    int count[SIZE] = {0};

    for (int i = 1; i < arg_c; i++)
    {
        for (jar = 0; arg_v[i][jar] != '\0'; jar++)
        {
            count[(unsigned char)arg_v[i][jar]]++;
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
int main(int argc, char **argv)
{
    my_ngram(argc, argv);
    return 0;
}
