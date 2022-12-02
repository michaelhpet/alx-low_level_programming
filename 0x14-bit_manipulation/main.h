#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int _strlen(const char *s);
unsigned int _pow(unsigned int base, unsigned int exp);
int is_not_bin(const char *s);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* _MAIN_H_ */
