#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		char c;
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		if (i != 9)
			putchar('\n');
	}
}


