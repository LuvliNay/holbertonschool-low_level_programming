#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet ten times in lowercase.
 * Return: value 0.
 */
void print_alphabet_x10(void)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			_putchar(alphabet[j]);
		}
	}
}
