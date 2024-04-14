#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
    // Open file using open system call
    int fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    
    if (fd == -1) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }
    char text[101] = "This is an example text to be written into the file. It has exactly 100 bytes.";
    ssize_t bytes_written = write(fd, text, strlen(text));
    
    if (bytes_written == -1) {
        perror("Failed to write into file");
        close(fd);
        exit(EXIT_FAILURE);
    }

    printf("Successfully written %zd bytes into the file.\n", bytes_written);

    // Close the file
    close(fd);

    return 0;
}