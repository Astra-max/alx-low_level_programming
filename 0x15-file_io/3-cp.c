#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *create_buffer(char *file);
void close_file(int fd);


/**
 * create_buffer - allocates bytes
 * @file: file
 * Return: buffer
 */

char *create_buffer(char *file)
{

char *buffer;

buffer = malloc(sizeof(char) * BUFFER_SIZE);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - closes file
 * @fd: file descriptor
 */

void close_file(int fd)
{
int c;

c = close(fd);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - controller
 * @argv: pointer to array of char
 * @argc: number of args
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(93);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, BUFFER_SIZE);
to = open(argv[1], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

free(buffer);
exit(98);
}
w = write(to, buffer, r);

if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, BUFFER_SIZE);

to = open(argv[2], O_WRONLY | O_APPEND);

} while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
