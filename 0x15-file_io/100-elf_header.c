#include "main.h"
#include <elf.h>

/**
 * main - displays information contained in the ELF header
 * at the start of an ELF file
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 on success, non-zero otherwise
*/
int main(int argc, char *argv[])
{
	int fd, r_count;
	Elf64_Ehdr *header;

	if (argc != 2)
		exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		_close_fd(fd);
		exit(98);
	}
	r_count = read(fd, header, sizeof(Elf64_Ehdr));
	if (r_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		_close_fd(fd);
		free(header);
		exit(98);
	}
	is_elf(header->e_ident);
	printf("ELF Header:\n");
	puts_magic(header->e_ident);
	puts_class(header->e_ident);
	puts_data(header->e_ident);
	puts_version(header->e_ident);
	puts_osabi(header->e_ident);
	puts_abi(header->e_ident);
	puts_type(header->e_type, header->e_ident);
	puts_entry(header->e_entry, header->e_ident);
	free(header);
	_close_fd(fd);
	return (0);
}

/**
 * is_elf - checks for an ELF file.
 * @e_ident: array containing the ELF magic numbers.
*/
void is_elf(unsigned char *e_ident)
{
	int i, is;
	char identifiers[] = {69, 70, 76, 127, 0};

	i = 0, is = 0;
	while (identifiers[i])
	{
		if (e_ident[i] == identifiers[i])
			is = 1;
		i++;
	}

	if (!is)
	{
		dprintf(STDERR_FILENO, "Not an ELF file\n");
		exit(98);
	}
}

/**
 * puts_magic - prints the ELF header's magic numbers
 * @e_ident: array of ELF magic numbers.
*/
void puts_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * puts_class - prints class from ELF header.
 * @e_ident: array containing the ELF class.
 */
void puts_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * puts_data - prints data from ELF header.
 * @e_ident: array of ELF data.
 */
void puts_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * puts_version - prints version from ELF header.
 * @e_ident: array of ELF version.
 */
void puts_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * puts_osabi - prints OS/ABI from ELF header
 * @e_ident: array of ELF version.
 */
void puts_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * puts_abi - prints ABI version from ELF header
 * @e_ident: array of ELF ABI version.
*/
void puts_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * puts_type - prints type from ELF header
 * @e_type: ELF type
 * @e_ident: array of ELF class
*/
void puts_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * puts_entry - prints entry from ELF header.
 * @e_entry: address of entry point.
 * @e_ident: array of ELF class.
 */
void puts_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * _close_fd - closes a file descriptor
 * @fd: file descriptor
*/
void _close_fd(int fd)
{
	int c_ret;

	c_ret = close(fd);
	if (c_ret == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(98);
	}
}
