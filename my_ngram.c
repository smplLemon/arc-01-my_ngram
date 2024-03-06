#include <stdio.h>

#define CHARACTERS 126

int my_isascii(char *string)
{
    int i = 0;
    while (string[i])
    {
        i++;
    }

    return i;
}

int my_strlen(char *str)
{
    int i = 0;

    do
    {
        i++;
    } while (str[i]);

    return i;
}

void my_ngram(int argumentCount, char **argumentValue)
{
    int countCharacters[CHARACTERS] = {0};
    int i, j, c_i, res;

    for (i = 1; i < argumentCount; i++)
    {
        c_i = my_strlen(argumentValue[i]);
        res = my_isascii(argumentValue[i]);

        if (res > 0)
        {
            for (j = 0; j < c_i; j++)
            {
                countCharacters[(unsigned char)argumentValue[i][j]]++;
            }
        }
    }

    for (i = 0; i < CHARACTERS; i++)
    {
        if (countCharacters[i] > 0)
        {
            printf("%c: %d\n", i, countCharacters[i]);
        }
    }
}

int main(int argc, char **argv)
{
    my_ngram(argc, argv);
    return 0;
}