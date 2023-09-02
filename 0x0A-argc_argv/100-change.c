#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: no passed
 * @argv: passed and kept
 * Return: 1
 */

int coins[] = {25, 10, 5, 2, 1};

int main(int argc, char *argv[])
{
int i, cents, coin_count, count;
if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coin_count = sizeof(coins) / sizeof(coins[0]);
count = 0;

for (i = 0; i < coin_count; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}
printf("%d\n", count);
return (0);
}

