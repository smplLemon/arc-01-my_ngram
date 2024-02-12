#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void function(char argv[], char oldChars[], int count[])
{
    int len = strlen(argv);

    for (int i = 0; i < len; i++)
    {
        bool isThere = false;
        for (int j = 0; j < 20; j++)
        {
            if (argv[i] == oldChars[j])
            {
                count[j]++;
                isThere = true;
                break;
            }
        }

        if (!isThere)
        {
            for (int j = 0; j < 20; j++)
            {
                if (oldChars[j] == '\0')
                {
                    oldChars[j] = argv[i];
                    count[j]++;
                    break;
                }
            }
        }
    }
}

void sorting(char oldChars[], int count[])
{
    int i, j, temp;
    char tempChar;

    for (i = 0; i < 20 - 1; i++)
    {
        for (j = 0; j < 20 - i - 1; j++)
        {
            if (oldChars[j] > oldChars[j + 1])
            {

                tempChar = oldChars[j];
                oldChars[j] = oldChars[j + 1];
                oldChars[j + 1] = tempChar;

                temp = count[j];
                count[j] = count[j + 1];
                count[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    char oldChars[20] = {0};
    int count[20] = {0};

    for (int i = 1; i < argc; i++)
    {
        function(argv[i], oldChars, count);
    }

    sorting(oldChars, count);

    for (int i = 0; i < 20; i++)
    {
        if (count[i] > 0)
        {
            printf("%c: %d\n", oldChars[i], count[i]);
        }
    }

    return 0;
}
