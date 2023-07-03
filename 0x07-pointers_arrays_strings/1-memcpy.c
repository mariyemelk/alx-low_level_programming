#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: memory area 2
 * @src: memory area 1
 * @n: bytes
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int lk;

	for (lk = 0; lk < n; lk++)
	{
		dest[lk] = src[lk];
	}

	return (dest);
}
