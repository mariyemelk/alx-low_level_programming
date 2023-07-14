#include "main.h"

/**
 * _puts - prints string
 * @str: pointer
 * Return: void
*/

void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
}

/**
 * _atoi - convert str to int
 * @s: str
 * Return: int
*/

int _atoi(const char *s)
{
	int sg = 1;
	unsigned long int r = 0, fnum, j;

	for (fnum = 0; !(s[fnum] >= 48 && s[fnum] <= 57); fnum++)
	{
		if (s[fnum] == '-')
		{
			sg *= -1;
		}
	}

	for (j = fnum; s[j] >= 48 && s[j] <= 57; j++)
	{
		r *= 10;
		r += (s[j] - 48);
	}

	return (sg * r);
}

/**
 * print_int - prints int
 * @n: int
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, j, r;

	for (j = 0; n / div > 9; j++, div *= 10)
		;

	for (; div >= 1; n %= div, div /= 10)
	{
		r = n / div;
		_putchar('0' + r);
	}
}

/**
 * main - print the multiplication
 * @argc: in
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
