#include "main.h"

/**
 * _isalpha - is a function to check if a char is lower or uppcase
 *
 *  @c: take input from other functions
 *
 *  Return: 1, c true, else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
