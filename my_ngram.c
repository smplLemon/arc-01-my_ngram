#include <stdio.h>
#include <stdlib.h>

void my_ngram(int argc, char **argv)
{
    int count[128] = {0};
    int i = 1;
    while (i < argc)
    {
        int j = 0;
        while (argv[i][j] != '\0')
        {
            unsigned char character = argv[i][j];
            count[character]++;
            j++;
        }
        i++;
    }
    int z = 0;
    while (z < 128)
    {
        if (count[z] != 0)
        {
            printf("%c:%d\n", z, count[z]);
        }
        z++;
    }
}
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("%s text [text2, text3]\n", argv[0]);
        return 1;
    }

    my_ngram(argc, argv);
    return 0;
}