#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int write_to_file(int fd, char *s);
unsigned int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _MAIN_H_ */
