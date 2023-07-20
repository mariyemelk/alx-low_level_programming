#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num
 * @...: sum
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int d = 0, u = n;
	va_list p;

	if (!n)
		return (0);
	va_st(p, n);
	while (u--)
		d += va_arg(p, int);
	va_en(p);
	return (d);
}
