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
int _copy_to(int in_fd, int out_fd);
void _close_fd(int fd);
void is_elf(unsigned char *e_ident);
void puts_magic(unsigned char *e_ident);
void puts_class(unsigned char *e_ident);
void puts_data(unsigned char *e_ident);
void puts_version(unsigned char *e_ident);
void puts_osabi(unsigned char *e_ident);
void puts_abi(unsigned char *e_ident);
void puts_type(unsigned int e_type, unsigned char *e_ident);
void puts_entry(unsigned long int e_entry, unsigned char *e_ident);


#endif /* _MAIN_H_ */
