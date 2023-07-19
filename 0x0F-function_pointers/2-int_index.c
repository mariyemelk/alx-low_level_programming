#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int u = 0;

	if (array && size && cmp)
		while (u < size)
		{
			if (cmp(array[u]))
				return (u);
			u++;
		}
	return (-1);
}
