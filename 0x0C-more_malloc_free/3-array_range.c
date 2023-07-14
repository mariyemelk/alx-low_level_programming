#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: min int
 * @max: max int
 * Return: array
*/

int *array_range(int min, int max)
{
	int l, u;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (!p)
		return (NULL);
	for (u = 0; u < l; u++)
		p[u] = min++;
	return (p);
}
