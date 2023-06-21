#include "main.h"

/**
 * _islower - function to chek if character is lowercase
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
