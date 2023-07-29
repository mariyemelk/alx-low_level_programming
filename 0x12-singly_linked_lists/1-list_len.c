#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: first pointer in the node
 * Return: num of elememt
*/

size_t list_len(const list_t *h)
{
	size_t ing = 0;

	while (h)
	{
		h = h->next;
		ing++;
	}
	return (ing);
}
