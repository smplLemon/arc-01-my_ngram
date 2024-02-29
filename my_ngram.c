 #include <stdio.h>
 #include <ctype.h>

#define SIZE 9999

void my_ngram(int add, char** bdd)
{
int num1 = 0;
int num2 = 0;
int count[SIZE] = {0};

for (int i = 1; i < add; i++){
    for (num2 = 0; bdd[i][num2] != '\0'; num2++){
    num1 = bdd[i][num2];
    count[(unsigned char)num1]++;
    }
}

for (int a = 0; a < SIZE; a++){
    if (count[a])
    {
        printf("%c: %d\n", a, count[a]);
        }
    }
}
int main(int argc, char **argv)
{
    my_ngram(argc, argv);
    return 0;
}