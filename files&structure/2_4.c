#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[100];
    char *keywords[] = {"int", "float", "double", "char", "short", "long", "signed", "unsigned"};
    int counts[] = {0, 0, 0, 0, 0, 0, 0, 0};

    fp = fopen("input.c", "r");
    if (fp == NULL) {
        printf("Error: input file cannot be opened\n");
        return 1;
    }

    while (fgets(line, 100, fp) != NULL) {
        for (int i = 0; i < 8; i++) {
            char *pos = line;
            while ((pos = strstr(pos, keywords[i])) != NULL) {
                pos += strlen(keywords[i]);
                if (*pos == ' ' || *pos == '\t' || *pos == '\n') {
                    counts[i]++;
                }
            }
        }
    }

    fclose(fp);

    printf("Variables defined:\n");
    printf("int: %d\n", counts[0]);
    printf("float: %d\n", counts[1]);
    printf("double: %d\n", counts[2]);
    printf("char: %d\n", counts[3]);
    printf("short: %d\n", counts[4]);
    printf("long: %d\n", counts[5]);
    printf("signed: %d\n", counts[6]);
    printf("unsigned: %d\n", counts[7]);

    return 0;
}
