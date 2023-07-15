#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* function prototypes for task 3 */
char *allocate_buffer(char *filename);
void close_fd(int file_descriptor);
void read_and_write(int source_fd, int dest_fd, char *buffer, char *filename_from, char *filename_to);

/* function prototypes for task 4 */
void validate_elf(unsigned char *identifier);
void show_magic(unsigned char *identifier);
void close_file(int file_desc);

#endif
