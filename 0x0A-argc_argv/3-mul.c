#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies arg passed
 * Return: -1 if args < 1
 * @argv: Pointer array that holds args passed
 * @argc: Number of arguments passed
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int multply, iterator;

for (iterator = 0; iterator < argc; iterator++)
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
int number1 = atoi(argv[1]);
int number2 = atoi(argv[2]);

multply = number1 * number2;
printf("%d\n", multply);
break;
}
}
return (0);
}
