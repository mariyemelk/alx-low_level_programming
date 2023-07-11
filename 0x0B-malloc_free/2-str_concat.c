#include "main.h"

/**
 * _strlen - find length
 * @s: str
 * Return: in
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;

	return (size);
}

/**
 * *str_concat - function that concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * Return: poi
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, t;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	n = malloc((size1 + size2) * sizeof(char) + 1);
	if (n == 0)
		return (0);

	for (t = 0; t <= size1 + size2; t++)
	{
		if (t < size1)
			n[t] = s1[t];
		else
			n[t] = s2[t - size1];
	}
	n[t] = '\0';
	return (n);
}
