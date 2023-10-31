#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFSIZE 1024

void error_exit(int code, const char *message, const char *file) {
    dprintf(STDERR_FILENO, message, file);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    char *file_from = argv[1];
    char *file_to = argv[2];

    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFSIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        error_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        error_exit(99, "Error: Can't write to %s\n", file_to);
    }

    while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            error_exit(99, "Error: Can't write to %s\n", file_to);
        }
    }

    if (bytes_read == -1) {
        error_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}

