#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Task 3 Functions */
void check_argc(int argc);
int open_file(const char *filename);
int create_or_truncate_file(const char *filename);
void write_to_file(int fd, char *buffer, ssize_t bytes, const char *filename);
void close_files(int fd1, int fd2);

#endif
