#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character to check.
 *
 * Return: SUCCESS (1)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
