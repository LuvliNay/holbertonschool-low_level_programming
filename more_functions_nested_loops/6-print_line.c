#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: variable given.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int line = '_';

	while (n >= 0)
	{
		_putchar(line);
	n--;
	}
	_putchar('\n');
}
