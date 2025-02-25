#include <stdio.h>
#include "main.h"

/**
 * _abs - prints the sign of a number.
 * @n: variable given.
 * Return: SUCCESS (0)
 */

int _abs(int n)
{
	int valor_absoluto;

	if (n < 0)
	{
		valor_absoluto = n * -1;
		return (valor_absoluto);
	}
	return (n);
}
