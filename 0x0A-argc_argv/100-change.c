#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argv: pointer
 * @argc: nmb
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int u, leastcents = 0, mn = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (u = 0; u < 5; i++)
		{
			if (mn >= cents[u])
			{
				leastcents += mn / cents[u];
				mn = mn % cents[u];
				if (mn % cents[u] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
