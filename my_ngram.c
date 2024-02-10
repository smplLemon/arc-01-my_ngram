#include <stdio.h>
#define ASCII_SIZE 256

int my_strlen(char *str)
{
    int i = 0;
    int res = 0;
    do
    {
        res += 1;
        i += 1;
    } while (str[i] != '\0');
    return res;
}

void strings_count(char *param_1)
{
    int i = 0;
    int result[ASCII_SIZE] = {0};
    for (; i < my_strlen(param_1); i++)
    {
        if (param_1[i])
        {
            result[param_1[i]]++;
        }
    }

    while (i < ASCII_SIZE)
    {
        if (result[i])
        {
            printf("%c: %d\n", i, result[i]);
        }
        i++;
    }
}

void my_ngram(int argc, char **argv)
{
    for (int i = 1; i < my_strlen(argv[i]); i++)
    {
        strings_count(argv[i]);
    }
}

int main(int argc, char **argv)
{
    my_ngram(argc, argv);
    return 0;
}