#include<stdio.h>
#include<string.h>

int main() {
    int ngram[128] = {0};  

    const char* str = "aabbccddff";

    for (int i = 0; i < strlen(str); i++) {
        ngram[(int)str[i]]++;  
    }

    printf("%c, %d\n", 'a', ngram['a']);  

    return 0;
}