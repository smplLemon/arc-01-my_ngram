
#include <stdio.h>
#include <string.h>

void print_usage(char *program_name) {
    printf("Usage: %s [string]...\n", program_name);
}

void count_occurrences(const char *text, int *counts) {
    for (int j = 0; text[j] != '\0'; j++) {
        counts[(unsigned char)text[j]]++;
    }
}

void print_character_counts(int *counts) {
    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", (char)i, counts[i]);
        }
    }
}

void analyze_input_strings(int argc, char *argv[]) {
    if (argc == 1) {
        print_usage(argv[0]);
        return;
    }

    int counts[256] = {0};

    for (int i = 1; i < argc; i++) {
        const char *text = argv[i];
        count_occurrences(text, counts);
    }

    print_character_counts(counts);
}

int main(int argc, char *argv[]) {
    analyze_input_strings(argc, argv);
    return 0;
}
