#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer
 * @b: constant byte
 * @n: max bytes
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lk;

	for (lk = 0; n > 0; lk++, n--)
	{
		s[lk] = b;
	}

	return (s);
}
