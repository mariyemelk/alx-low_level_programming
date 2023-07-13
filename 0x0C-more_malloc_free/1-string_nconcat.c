#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: str1
 * @s2: str2
 * @n: num of byt
 * Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int u, y, s1_le, s2_le;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";

	for (s1_le = 0; s1[s1_le] != '\0'; s1_le++)
		;

	for (s2_le = 0; s2[s2_le] != '\0'; s2_le++)
		;

	str = malloc(s1_le + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (u = 0; s1[u] != '\0'; u++)
		str[u] = s1[u];

	for (y = 0; y < n; y++)
	{
		str[u] = s2[y];
		u++;
	}

	str[u] = '\0';
	return (str);
}
