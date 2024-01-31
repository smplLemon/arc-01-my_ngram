#include <stdio.h>
 #include <string.h>
 #define MAX_ARRAY_SIZE 256

 int letters[MAX_ARRAY_SIZE] = {0};

 int count_chars(char* text) {
     int count = 0;
     while (*text != '\0') {
         count++;
         text++;
     }
     return count;
 }

 void print(int* arr, int size_arr) {
     for (int i = 0; i < size_arr; i++) {
         if (arr[i] > 0) {
             printf("%c:%d\n", i, arr[i]);
         }
     }
 }

 int main(int argc, char* argv[]) {
     if (argc < 2) {
         printf("Usage: %s text [text2, text3]\n", argv[0]);
         return 1;
     }

     for (int i = 1; i < argc; i++) {
         for (int j = 0; argv[i][j] != '\0'; j++) {
             letters[(int)argv[i][j]]++;
         }
     }

     print(letters, MAX_ARRAY_SIZE);

     return 0;
 }
