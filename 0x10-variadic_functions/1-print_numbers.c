#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 * @...: int
 * Return: num
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int u = n;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (u--)
		printf("%d%s", va_arg(p, int),
				u ? (separator ? separator : "") : "\n");
	va_end(p);
}
