#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 *
 * @a: rows
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int we, you;

	for (we = 0; we < 8; we++)
	{
		for (you = 0; you < 8; you++)
		{
			_putchar(a[we][you]);
		}
		_putchar('n\');
	}
}
