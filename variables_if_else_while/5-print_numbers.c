#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		if (i < 9)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");

	return (0);
}
