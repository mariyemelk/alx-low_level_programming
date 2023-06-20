#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 *@c: The chararcter to print
 *
 * Return: On success 1, on error -1
*/

int putchar(char c)
{
	return (write(1, &c, 1));
}
