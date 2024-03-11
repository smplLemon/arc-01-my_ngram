#include <unistd.h>

void countOfCharacters(char *str)
{
    int count[256] = {0};
    int i = 0;
    while (str[i])
    {
        count[(unsigned char)str[i]]++; 
        i++;
    }
    i = 0;
    while (i < 256)
    {
        if (count[i] > 0)
        {
            char c = (char)i;
            write(1, &c, 1); 
            write(1, ":", 1);
            char num[12];
            int j = 0;
            while (count[i] != 0)
            {
                num[j++] = count[i] % 10 + '0'; 
                count[i] /= 10;
            }
            while (j > 0)
                write(1, &num[--j], 1);
            write(1, "\n", 1);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0); 

    int i = 1;
    while (i < argc)
    {
        countOfCharacters(argv[i]);
        

        i++;
    }
    return (0);
}
