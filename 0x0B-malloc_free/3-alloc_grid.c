#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **all_g;
	int x, y;

	if (width <= 0 || height <=0)
		return (null);
	all_g = malloc(sizeof(int *) * height);

	if(all_g == NULL)
		return(NULL);

	for (x = 0; x < height; x++)
}
