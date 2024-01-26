// #include <stdio.h>
// #include <string.h>

// void my_ngram(char* obc1[], int length) {
//    int str[127] = {0};
//    for (int i = 0; i < length; i++) {
//       for (int j = 0; j < strlen(obc1[i]); j++) {
//          char word = obc1[i][j];
//          str[(int)word]++;
//       }
//    }
//    for (int i = 0; i < 127; i++) {
//       if (str[i] > 0) {
//          printf("%c: %d\n", 97, str[97]);
//       }
//    }
// }
// int main(int argc, char* argv[]) {
//    my_ngram(argv , argc);
//    return 0;
// }

#include <stdio.h>
#include <string.h>
void my_ngram(char** obc1, int length) {
   int str[128] = {0};
   for (int i = 0; i < length; i++) {
      for (int j = 0; j < obc1[i][j]; j++) {
         char word = obc1[i][j];
         str[(int)word]++;
      }
   }
   for (int i = 0; i < 128; i++) {
      if (str[i] > 0) {
         printf("%c: %d\n", i, str[i]);
      }
   }
}
int main(int argc, char** argv) {
   my_ngram(argv, argc);
   return 0;
}
