#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* function prototypes for task 3 */
void check_args(int argc);
int open_file_read(char *file_name);
int open_file_write(char *file_name);
void handle_errors(int fd, char *file_name, int err_code);

#endif
