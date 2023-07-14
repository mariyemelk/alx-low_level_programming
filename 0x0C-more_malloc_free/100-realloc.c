#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 * Return: 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *h;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		h = malloc(new_size);
		if (h == NULL)
			return (NULL);
		return (h);
	}
	if (new_size > old_size)
	{
		h = malloc(new_size);
		if (h == NULL)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)h + j) = *((char *)ptr + j);
		free(ptr);
	}
	return (h);
}
