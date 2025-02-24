#include <stdio.h>
#include "main.h"

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	char testChar1 = 'g';
	char testChar2 = 'G';

	printf("%c is lowercase? %d\n", testChar1, _islower(testChar1));
	printf("%c is lowercase? %d\n", testChar2, _islower(testChar2));

	return (0);
}
