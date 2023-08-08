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
void read_and_write(int s_fd, int d_fd, char *buffer, char *fn_f, char *fn_t);
void close_fd(int file_descriptor);
char *allocate_buffer(char *filename);

/* Task 4 Function */
void validate_elf(unsigned char *identifier);
void show_magic(unsigned char *identifier);
void close_file(int file_desc);

#endif
