#include <stdio.h>

/**
 * main - prints out number of arguments passed
 * @argc: Number of arguments passed
 * @argv: String arguments passed
 *Return: 0
 */

int main(int argc, char argv[])
{
int iterator;

for (iterator = 0; iterator < argc; iterator++)
{
if (argc == 0)
{
printf("0\n");
break;
}
else
{
printf("%d\n", argc - 1);
break;
}
}
return (0);
}
