#include "main.h"

/**
 * _islower - function
 *
 * Description: a function to cheks the case of characters
 *
 * @c: cheks input of function
 *
 * return: returns 1 if `c` is lowercase otherwise 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
