#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int b = 0, size = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/*+1 on the size*/
	| d = malloc(size * sizeof(*str) + 1);

	if (d == 0)
		return (NULL);

	else
	{
		for (; b < size; b++)
			d[b] = str[b];
	}
	return (d);
}
