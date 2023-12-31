#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
/* HELPERS */
int _putchar(char c);
int copy_file(int source_fd, int dest_fd, char **argv);
/* MAIN FUNCTIONS */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */
