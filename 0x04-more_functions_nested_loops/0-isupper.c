#include "main.h"

/**
 * _isupper - checks c if it's upper
 * @c: input
 * Reurn: 1 uppercase, otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
