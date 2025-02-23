#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return (0);
}
