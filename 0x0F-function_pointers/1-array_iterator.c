#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *d = array + size - 1;

	if (array && size && action)
		while (array <= d)
			action(*array++);
}
