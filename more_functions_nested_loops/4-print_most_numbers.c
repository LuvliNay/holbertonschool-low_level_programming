#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char num[] = "0123456789\n";
	int i = 0;

	while (num[i] != '\0')
	{
		_putchar(num[i]);
		i++;
	}
}
