#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase,
 *                      followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
