#include <unistd.h>

/**
 * _putchar - write the char c
 * @c: the char
 * Return: 1, -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
