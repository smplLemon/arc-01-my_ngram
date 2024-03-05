#include <stdio.h>
#include <ctype.h>

void my_ngram(char *str) {
  int len = strlen(str);

  
  if (len == 0 || str[0] == '\n') {
    printf("NO\n");
    return;
  }

  int char_count[256] = {0};
  for (int i = 0; str[i] != '\0'; i++) {
    char ch = str[i];
    char_count[ch]++;
  }

  for (int i = 0; i < 256; i++) {
    if (char_count[i] > 0) {
      printf("%c : %d\n", (char)i, char_count[i]);
    }
  }
}

int main(int argc, char **argv) {
  char str[100];

  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';

  my_ngram(str);

  return 0;
}