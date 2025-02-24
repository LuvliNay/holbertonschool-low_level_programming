#include <unistd.h>

/**
 * _putchar(char c) - writes a character to stdout
 * @c: The character to print
 *
 * Return: SUCCESS (0)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
