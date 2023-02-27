#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char c;

    fp1 = fopen("input.c", "r");
    if (fp1 == NULL) {
        printf("Error: input file cannot be opened\n");
        return 1;
    }

    fp2 = fopen("output.c", "w");
    if (fp2 == NULL) {
        printf("Error: output file cannot be opened\n");
        return 1;
    }

    while ((c = getc(fp1)) != EOF) {
        if (c == '/') {
            char next_char = getc(fp1);
            if (next_char == '*') {
                // comment block begins
                while (1) {
                    c = getc(fp1);
                    if (c == '*' && getc(fp1) == '/') {
                        // comment block ends
                        break;
                    }
                }
            } else {
                // not a comment, write both characters
                putc(c, fp2);
                putc(next_char, fp2);
            }
        } else {
            // not a comment, write character
            putc(c, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    printf("Comments removed and copied to output file successfully\n");
    return 0;
}
