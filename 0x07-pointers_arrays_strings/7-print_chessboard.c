#include "main.h"

/**
 * print_chessboard - Main point
 * @a: Character tested
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 0; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}