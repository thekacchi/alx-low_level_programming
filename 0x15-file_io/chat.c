#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 4096

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void print_elf_header_info(const Elf64_Ehdr *header) {
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass: %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
    printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
                         (header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid"));
    printf("Version: %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
                           (header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux" : "Other"));
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: 0x%x\n", header->e_type);
    printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open the file");
    }

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
    if (bytes_read == -1 || bytes_read != sizeof(Elf64_Ehdr)) {
        print_error("Failed to read the ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("File is not an ELF file");
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}

