
#include <stdio.h>

int strLen(char *s)
{
    int s_c = 0;

    if (*s != '\n')
    {
        for (int i = 0; s[i]; i++)
        {
            s_c++;
        }
    }
    else
    {
        return s_c;
    }

    return s_c;
}

int indexs_count(char *indexs)
{
    int index_count = 0;
    int indexs_length = strLen(indexs);

    for (int i = 0; i < indexs_length; i++)
    {
        if (indexs[i] > 0)
        {
            index_count++;
        }
    }
}

void my_ngram(int argument_count, char *argument_value[])
{
    int result[256] = {0};

    int camp = 0;

    for (int i = 1; i < argument_count; i++)
    {
        camp = indexs_count(argument_value[i]);

        for (int j = 0; j < camp; j++)
        {
            result[argument_value[i][j]]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {
        if (result[i] > 0)
        {
            printf("%c: %d\n", i, result[i]);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("In %s not fount anything!", argv[0]);
        return 0;
    }

    my_ngram(argc, argv);

    return 0;
}
