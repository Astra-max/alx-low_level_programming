#include <stdio.h>

/**
 * main - prints all args passed
 * @argc: Number of ARGS PASSED
 * @argv: Pointer array that holds args passed
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int iterator;

for (iterator = 0; iterator < argc; iterator++)
{
printf("%s\n", argv[iterator]);
}
return (0);
}
