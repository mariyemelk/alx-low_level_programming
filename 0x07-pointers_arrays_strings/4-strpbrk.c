#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: str
 * @accept: str that matches
 *
 * Return: pointer or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int aa, bb;
	char *p;

	aa = 0;
	while (s[aa] != '\0')
	{
		bb = 0;
		while (accept[bb] != '\0')
		{
			if (accept[bb] == s[aa])
			{
				p = &s[aa];
				return (p);
			}
			bb++;
		}
		aa++;
	}

	return (0);
}
