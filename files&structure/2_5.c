#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: program_name input_file output_file\n");
        return 1;
    }

    FILE *input_file, *output_file;
    char c;

    input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        printf("Error: input file cannot be opened\n");
        return 1;
    }

    output_file = fopen(argv[2], "w");
    if (output_file == NULL) {
        printf("Error: output file cannot be opened\n");
        return 1;
    }

    while ((c = getc(input_file)) != EOF) {
        putc(c, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    printf("File copied successfully\n");

    return 0;
}
