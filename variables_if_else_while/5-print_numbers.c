#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		if (i <= 9)
			printf("%d\n", i);

	return (0);
}
