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

	while (m--)
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
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
