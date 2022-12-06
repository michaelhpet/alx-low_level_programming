#include "main.h"

/**
 * main - displays information contained in the ELF header at
 * the start of an ELF file
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success), non-zero otherwise
*/
int main(int argc, char *argv[])
{
	int fd, r_count;


