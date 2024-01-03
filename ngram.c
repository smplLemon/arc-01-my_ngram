#include <unistd.h>

void print_cr_ct(char c, int count) {
    char arr[32];
    int size = snprintf(arr, sizeof(arr), "%c:%d\n", c, count);
    write(STDOUT_FILENO, arr, size);
}

void count_char(const char *text) {
    int count[256] = {0};
    int i = 0;
    while( text[i] != '\0') {
        unsigned char c = (unsigned char)text[i];
        count[c]++;
        i++;
    }
    int i = 0; 
    while (i < 256){
        if (count[i] > 0) {
            print_cr_ct(i, count[i]);
        }
        i++;
    }
}

int main(int argc, char *argv[]) {
    int i = 1;
    while ( i < argc) {
        count_char(argv[i]);
        i++;
    }

    return 0;
}#include <unistd.h>

void print_cr_ct(char c, int count) {
    char arr[32];
    int size = snprintf(arr, sizeof(arr), "%c:%d\n", c, count);
    write(STDOUT_FILENO, arr, size);
}

void count_char(const char *text) {
    int count[256] = {0};
    int i = 0;
    while( text[i] != '\0') {
        unsigned char c = (unsigned char)text[i];
        count[c]++;
        i++;
    }
    int i = 0; 
    while (i < 256){
        if (count[i] > 0) {
            print_cr_ct(i, count[i]);
        }
        i++;
    }
}

int main(int argc, char *argv[]) {
    int i = 1;
    while ( i < argc) {
        count_char(argv[i]);
        i++;
    }

    return 0;
}#include <unistd.h>

void print_cr_ct(char c, int count) {
    char arr[32];
    int size = snprintf(arr, sizeof(arr), "%c:%d\n", c, count);
    write(STDOUT_FILENO, arr, size);
}

void count_char(const char *text) {
    int count[256] = {0};
    int i = 0;
    while( text[i] != '\0') {
        unsigned char c = (unsigned char)text[i];
        count[c]++;
        i++;
    }
    int i = 0; 
    while (i < 256){
        if (count[i] > 0) {
            print_cr_ct(i, count[i]);
        }
        i++;
    }
}

int main(int argc, char *argv[]) {
    int i = 1;
    while ( i < argc) {
        count_char(argv[i]);
        i++;
    }

    return 0;
}
