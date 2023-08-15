#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers below 98
 * @n: value input
 */
void print_to_98(int n)
{
	if (n <= 9)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				for (; n >= 98; n++)
				{
					if (n == 98)
					{
						printf("%d", n);
						printf("\n");
						break;
					}
					else
					{
						printf("%d", n);
					}
				}
			}
		}
	}
}
