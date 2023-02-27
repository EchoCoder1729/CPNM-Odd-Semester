#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    int total_chars = 0, comment_chars = 0;

    fp = fopen("input.c", "r");
    if (fp == NULL) {
        printf("Error: input file cannot be opened\n");
        return 1;
    }

    while ((c = getc(fp)) != EOF) {
        if (c == '/') {
            char next_char = getc(fp);
            if (next_char == '/') {
                // single-line comment begins
                while (getc(fp) != '\n') {
                    comment_chars++;
                }
            } else if (next_char == '*') {
                // comment block begins
                comment_chars++;
                while (1) {
                    c = getc(fp);
                    total_chars++;
                    comment_chars++;
                    if (c == '*' && getc(fp) == '/') {
                        // comment block ends
                        break;
                    }
                }
            }
        } else {
            // not a comment
            total_chars++;
        }
    }

    fclose(fp);

    double percent = (double)comment_chars / (double)total_chars * 100.0;
    printf("Percentage of characters in comments: %.2f%%\n", percent);

    return 0;
}
