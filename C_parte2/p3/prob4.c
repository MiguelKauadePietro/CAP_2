#include <stdio.h>
#include <stdlib.h>

int process_file(const char *filename);

int main() {
    const char *input_filename = "p4_input.txt";
    int result = process_file(input_filename);

    if (result == 0) {
        printf("Arquivo processado com sucesso.\n");
    } else {
        printf("Erro ao processar o arquivo.\n");
    }

    return result;
}

int process_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 1;
    }

    int space_count = 0;
    int max_line_length = 0;
    int line_count = 0;
    int current_line_length = 0;
    char ch;

    // First pass to count spaces and find the longest line
    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ') {
            space_count++;
        }
        if (ch == '\n') {
            if (current_line_length > max_line_length) {
                max_line_length = current_line_length;
            }
            current_line_length = 0;
            line_count++;
        } else {
            current_line_length++;
        }
    }
    // Check the last line if it doesn't end with a newline
    if (current_line_length > max_line_length) {
        max_line_length = current_line_length;
    }
    if (current_line_length > 0) {
        line_count++;
    }

    fclose(file);

    // Write the statistics to the binary file
    FILE *bin_file = fopen("info.bin", "wb");
    if (bin_file == NULL) {
        return 1;
    }

    fwrite(&space_count, sizeof(int), 1, bin_file);
    fwrite(&max_line_length, sizeof(int), 1, bin_file);
    fwrite(&line_count, sizeof(int), 1, bin_file);

    fclose(bin_file);

    return 0;
}