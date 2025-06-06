#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned int.
 * Return: converted number.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	if (n & 1)
	{
		_putchar('1');
	}

	else
	{
		_putchar('0');
	}
}
