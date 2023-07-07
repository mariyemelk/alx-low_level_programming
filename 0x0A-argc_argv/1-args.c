#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: nb cmm line
 * @argv: ponter
 * Return: 0 on success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
