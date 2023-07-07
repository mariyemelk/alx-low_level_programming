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
		int u, cen = 0, mn = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (mn >= cents[u])
			{
				cen += mn / cents[u];
				mn = mn % cents[i];
				if (money % cents[u] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", cen);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
