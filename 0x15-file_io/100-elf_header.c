#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_idnet);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks if a file is an ELF file
 * @e_ident: Pointer to array contianing the ELF magic numbers
 * Description: If file is not al ELF file, exot code 98
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 && e_ident[index] != 'E'
				&& e_indent[index] != 'L'
				&& e_indetn[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not and ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - promts the magic numbers of an ELF header
 * @e_ident: pointer to array containint ELF magic numbers
 * Description: Magic numvers are separated by soaces
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of and ELF header
 * @e_ident: pointer to arraycontaining ELD magic numbess
 * Descriptions: same as 
 */
void print_class(unsigned char *e_ident)
{
	printf("Class: ");

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
 * print_data - prints data
 * @e_ident: pointer
 */
void print_data(unsigned char *e_ident)
{
	printf("Data: ");

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
		printf("<unknown: %x\n", e_ident[EI_DATA]);
	}
}

/**
 * main - displays information contained in the 
 * ELF header at the satrts of ELF file
 * @argc: number of arguements supplied to program
 * @argv: array of pointers to the arguements
 * Description: if the file is not an ELF, functio fails 
 * with exit code 98
 * Return : 0 is succesfulf
 */
int main(int __attribute__((__unsused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: cant read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == 1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s': No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
        printf("ELF Header:\n");
        print_magic(header->e_ident);
        print_class(header->e_ident);
        print_data(header->e_ident);


	free(header);
	close_elf(o);
	return (0);
}
