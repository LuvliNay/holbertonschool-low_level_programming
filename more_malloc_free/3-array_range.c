#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: start (min) of range values to include.
 * @max: max of range of values to include.
 * Return: Pointer to newly created array or NULL.
 */
int *array_range(int min, int max)
{
	int *x, i;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		x = malloc(sizeof(int));
		x[0] = min;
	}
	else
	{
		x = malloc(sizeof(int) * (max - min + 1));
		if (x == NULL)
			return (NULL);
		for (i = 0; min <= max; i++, min++)
			x[i] = min;
	}
	return (x);
}
