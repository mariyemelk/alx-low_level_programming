#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: num
 * @argv: arg
 * Return: 0
*/

int main(int argc, char **argv)
{
	char *j = (char *)main;
	int y;

	if (argc != 2)
		printf("Error\n"), exit(1);
	y = atoi(argv[1]);
	if (y < 0)
		printf("Error\n"), exit(2);

	while (y--)
		printf("%02hhx%s", *j++, y ? " " : "\n");
	return (0);
}
