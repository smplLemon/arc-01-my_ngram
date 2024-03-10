#include <stdio.h>
#include <string.h>

void my_ngram(const char* str) {
    int counts[256] = {0}; 
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        counts[(unsigned char)str[i]]++;
    }
    
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            printf("%c:%d\n", (char)i, counts[i]);
        }
    }
    printf("\n"); // Добавляем символ новой строки после каждого вывода для разделения результатов
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s \"string1\" \"string2\" ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        my_ngram(argv[i]);
    }

    return 0;
}
