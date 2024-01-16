#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string(int argc, char **argv)
{
    int len = argc;
    for (int i = 1; argv[i] != 0; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            len++;
        }
    }

    char *result = malloc(len + 1 * sizeof(char));
    char *current = result;

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; j < (int)strlen(argv[i]); j++)
        {
            *current = argv[i][j];
            current++;
        }
    }
    *current = '\0';
    return result;
}

int main(int argc, char **argv)
{
    char *str = string(argc, argv);
    int counter;
    for (char character = ' '; character <= 'z'; character++)
    {
        counter = 0;
        for (size_t i = 0; i < strlen(str); i++)
        {
            if (character == str[i])
            {
                counter++;
            }
        }
        if (counter)
            printf("%c:%d\n", character, counter);
    }
    free(str);
    return 0;
}
