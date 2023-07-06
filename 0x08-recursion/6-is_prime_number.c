#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns if n is prime or no
 * @n: int
 * @on: inte
 * Return 1 or 0
*/

int check_prime(int n, int on);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all
 * @on: int
 * @n: inte
 * return: n
*/

int check_prime(int n, int on)
{
	if (on >= n && n >= 2)
		return (1);
	else if (n % on == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, on + 1));
}
