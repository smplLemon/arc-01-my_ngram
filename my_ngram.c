#include <stdio.h>

void my_ngram(int argc, char **argv)
{
    int num = 128;
    int counts[128] = {0};
    int outer_i = 0;
    int inner_i = 0;

    for (outer_i = 1; outer_i < argc; outer_i++)
    {
        for (inner_i = 0; argv[outer_i][inner_i] != '\0'; inner_i++)
        {
            counts[(unsigned char)argv[outer_i][inner_i]]++;
        }
    }

    for (outer_i = 0; outer_i < num; outer_i++)
    {
        if (counts[outer_i] > 0)
        {
            printf("%c: %d\n", outer_i, counts[outer_i]);
        }
    }
    return;
}

int main(int argc, char **argv)
{
    my_ngram(argc, argv);
    return 0;
}
