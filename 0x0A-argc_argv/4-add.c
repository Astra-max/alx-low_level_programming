#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_number - checks
 * @str: str
 * Return: 0
 */

int check_number(char *str)
{
unsigned int count = 0;

while (count < strlen(str))
{
if (isdigit(str[count]))
{
return (0);
}
count ++;
}
return (1);
}

/**
 * main - ADDS two positive numbers
 * @argc: Number of args pass
 * @argv: Holds args pass
 * Return: 1 and 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int count, sum, strToInt;

count = 1;
sum = 0;

while (count < argc)
{
int con = atoi(argv[count]);
if (!isdigit(con) && argc + 1)
{
printf("Error\n");
printf("%s\n",argv[count]);
printf("%d", argc);
return (1);
}
if (check_number(argv[count]) && argc + 1)
{
strToInt = atoi(argv[count]);
sum += strToInt;
}
count++;
}
printf("%d\n", sum);
return (0);
}
