#include <stdio.h>
#include <string.h>


void My_ngram(char *ArrayList) {
    int str = strlen(ArrayList);
    if (str == 0) {
        printf("NO \n");
        return;
    }
    int My_ngram[256] = {0};
    for (int j = 0; j < str; j++) {
        char ch = ArrayList[j];
        My_ngram[ch]++;
    }
    for (int j = 0; j < 256; j++) {
        if (My_ngram[j] > 0) {
            printf("%c : %d\n", (char)j, My_ngram[j]);
        }
    }
}

int main() {
    char ArrayList[127];
    printf("Enter: ");
    scanf("%s", ArrayList);

    My_ngram(ArrayList);

    return 0;
}