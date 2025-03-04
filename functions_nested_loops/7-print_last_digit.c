#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the sign of a number.
 * @n: the variable given.
 *
 * Return: SUCCESS (0)
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
