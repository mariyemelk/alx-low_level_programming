#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: num
 * @...: str
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int u = n;
	char *st;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (u--)
		printf("%s%s", (st = va_arg(p, char *)) ? st : "(nil)",
				u ? (separator ? separator : "") : "\n");
	va_end(p);
}
