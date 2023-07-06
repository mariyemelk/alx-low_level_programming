#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * @kl: square
 *
 * Return: n
*/

int square(int n, int kl);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find root
 *
 * @kl: sq root
 * @n: integer
 *
 * Return: n
*/

int square(int n, int kl)
{
	if (kl * kl == n)
		return (kl);
	else if (kl * kl < n)
		return (square(n, kl + 1));
	else
		return (-1);
}
