#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2
 * @width: in
 * @height: in
 * Return: array
*/

int **alloc_grid(int width, int height)
{
	int **ta, x, y;

	ta = malloc(sizeof(*ta) * height);

	if (width <= 0 || height <= 0 || ta == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			ta[x] = malloc(sizeof(**ta) * width);
			if (ta[x] == 0)
			{
				while (x--)
					free(ta[x]);
							free(ta);
							return (NULL);
			}

			for (y = 0; y < width; y++)
			ta[x][y] = 0;
		}
	}
	return (ta);
}
