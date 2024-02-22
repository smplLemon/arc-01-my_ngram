#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void counting_characters(const char *argv, int n, int *argc)
{
    for (int i = 0; argv[i] != '\0'; i++)
    {
        int index_1 = 0;
        for (int j = i; j < i + n && argv[j] != '\0'; j++)
        {
            index_1 = index_1 * 256 + tolower(argv[j]);
        }
        argc[index_1]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (argc[i] > 0)
        {
            printf("%c:%d\n", i, argc[i]);
            sleep(1);
        }
        else if (argc[i] == ' '){
            printf("Space:%d\n", argc[i]);
            sleep(1);
        }    
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <word or number>\n", argv[0]);
        return 1;
    }

    char *sign_arr = argv[1];
    int *index_arr = calloc(256, sizeof(int));

    counting_characters(sign_arr, 1, index_arr);
    free(index_arr);

    return 0;
}