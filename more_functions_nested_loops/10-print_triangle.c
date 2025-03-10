#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: variable given.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int row, space, col;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
				_putchar(' ');
			{
				for (col = size; col >= size - row; col--)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
