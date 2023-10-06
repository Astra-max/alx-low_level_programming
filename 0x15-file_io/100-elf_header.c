#include <elf.h>
#include "main.h"

void check_elf(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks if file is elf
 * @e_ident: pointer to an array containing elf
 */

void check_elf(unsigned char *e_ident)
{
int index;

for (index = 0; index < 4; index++)
{
if (e_ident[index] != 127 && e_ident[index] != 'E' && e_ident[index] != 'L' && e_ident[index] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - magic num in file
 * @e_ident: pointer
 * Return: -1 error
 */

void print_magic(unsigned char *e_ident)
{
int index;

printf("Magic: ");

for (index = 0; index < EI_NIDENT; index++)
{
printf("02x", e_ident[index]);

if (index == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * print_class - class of elf
 * @e_ident: pointer to char
 */

void print_class(unsigned char *e_ident)
{
printf("  class:  ");

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
printf("<unknown: %x>\n", e_ident([EI_CLASS]);
}
}

/**
 * print_data - data of elf
 * @e_ident: pointer
 */

void print_data(unsigned char *e_ident)
{
printf("   Data:   ");

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
 * print_version - sys version
 * @e_ident: pointer
 */

void print_version(unsigned char *e_ident)
{
printf("  Version: %d", e_ident[EI_VERSION]);

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
 * print_osabi - osabi
 * @e_ident: pointer
 */

void print_osabi(unsigned char *e_ident)
{
switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - system V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_FREEBDS:
printf("UNIX - FreeBDS\n");
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
 * print_abi - abi sys
 * @e_ident: pointer
 */

void print_abi(unsigned char *e_ident)
{
printf("  ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - type of elf
 * @e_type: int val
 * @e_ident: pointer
 */

void print-type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf("  Type:   ");
switch (e_type)
{
case ET_NONE:
printf("NONE (none)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_
