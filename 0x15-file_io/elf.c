#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_elf_header_info(Elf32_Ehdr *header) {
    int i;

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("Version: %d\n", header->e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("TRU64 UNIX\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone (embedded) application\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

    printf("Type: ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
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
            printf("Unknown\n");
    }

    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	const char *filename;
    int fd;
    ssize_t bytes_read;
    Elf32_Ehdr elf_header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    bytes_read = read(fd, &elf_header, sizeof(Elf32_Ehdr));
    if (bytes_read != sizeof(Elf32_Ehdr)) {
        perror("Error reading ELF header");
        close(fd);
        return 98;
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: %s is not an ELF file\n", filename);
        close(fd);
        return 98;
    }

    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}
