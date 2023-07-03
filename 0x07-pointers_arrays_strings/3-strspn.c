#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 *
 * Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lk, ym;

	for (lk = 0; s[lk] != '\0'; lk++)
	{
		for (ym = 0; accept[ym] != s[lk]; ym++)
		{
			if (accept[ym] == '\0')
				return (lk);
		}
	}

	return (lk);
}
