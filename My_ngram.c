#include <stdio.h>
#include <string.h>

void countNGrams(char *text) {
    int n = strlen(text);
    if (n == 0) {
        printf("Matn bo'sh\n");
        return;
    }

    int nGramCounts[256] = {0}; // 256 ta belgilar uchun n-gramlar sonini saqlash uchun massiv
    for (int i = 0; i < n; i++) {
        char ch = text[i];
        nGramCounts[ch]++;
    }

    for (int i = 0; i < 256; i++) {
        if (nGramCounts[i] > 0) {
            printf("%c:%d\n", (char)i, nGramCounts[i]);
        }
    }
}

int main() {
    char text[100];
    printf("Matnni kiriting: ");
    scanf("%s", text);

    countNGrams(text);

    return 0;
}
