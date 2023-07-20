#include "variadic_functions.h"

/**
 * format_char - format
 * @separator: str
 * @ap: arg
*/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - format
 * @separator: str
 * @ap: arg
*/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - format
 * @separator: str
 * @ap: arg
*/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - format
 * @separator: str
 * @ap: arg
*/

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints
 * @format: format
*/

void print_all(const char * const format, ...)
{
	int i = 0, u;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		u = 0;
		while (tokens[u].token)
		{
			if (format[i] == tokens[u].token[0])
			{
				tokens[u].f(separator, ap);
				separator = ", ";
			}
			u++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
