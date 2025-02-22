#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	print_alphabet();

	return (0);
}
