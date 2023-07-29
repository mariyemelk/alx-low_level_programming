#include "lists.h"

/**
 * _strlen - returns length
 * @s: string
 * Return: integer
*/

int _strlen(char *s)
{
	int ing = 0;

	if (!s)
		return (0);
	while (*s++)
		ing++;
	return (ing);
}

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to first node
 * Return: size
*/

size_t print_list(const list_t *h)
{
	size_t ing = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str : "(nil)");
		h = h->next;
		ing++;
	}
	return (ing);
}
