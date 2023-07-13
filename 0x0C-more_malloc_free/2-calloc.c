#include "main.h"

/**
 * *_memset - fills memory
 * @s: pointer
 * @a: const
 * @m: max
 * Return: str
*/

char *_memset(char *s, char a, unsigned int m)
{
	char *r = s;

	while (n--)
		*s++ = a;

	return (r);
}

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: arr lenght
 * @size: size
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	n = malloc(sizeof(int) * nmemb);

	if (n == 0)
		return (NULL);

	_memset(n, 0, sizeof(int) * nmemb);

	return (n);
}
