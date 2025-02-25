#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the character to check.
 *
 * Return: SUCCESS (1)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
