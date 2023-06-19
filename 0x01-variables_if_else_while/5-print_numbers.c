#include <stdio.h>

/**
 * main - entry point
 *
 * Description: single digit
 *
 * Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
