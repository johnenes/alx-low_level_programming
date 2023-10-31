#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content) {
    if (filename == NULL || text_content == NULL) {
        return -1;
    }

    FILE *file = fopen(filename, "a"); // Open the file in append mode

    if (file == NULL) {
        return -1;
    }

    int result = fputs(text_content, file); // Append the text to the file

    fclose(file);

    return (result == EOF) ? -1 : 1;
}

