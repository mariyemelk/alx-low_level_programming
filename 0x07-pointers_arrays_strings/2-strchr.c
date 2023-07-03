#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: string
 * @c: character
 *
 * Return: s
*/

char *_strchr(char *s, char c)
{
	int lk;

	for (lk = 0; s[lk] >= '\0' ; lk++)
	{
		if (s[lk] == c)
		{
			return (s + lk);
		}
	}

	return ('\0');
}
