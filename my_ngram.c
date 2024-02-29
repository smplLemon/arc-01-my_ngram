#include <stdio.h>
#include <string.h>

void counting_characters(char *str)
{
    int count[256] = {0};
    for (int i = 0; str[i]; i++)
    {
        count[(int)str[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("%c:%d\n", (char)i, count[i]);
        }
    }
}

int main(int argc, char **argv)
{
    char word[256] = "";
    for (int i = 1; i < argc; i++)
    {
        strcat(word, argv[i]);
    }

    counting_characters(word);

    return 0;
}
