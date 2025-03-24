#include "3-calc.h"

/**
 * op_add - Adds the value of the integers.
 * @a: first integers.
 * @b: second integers.
 *
 * Return: The sum of both integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts the value of both integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference of the integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies the values of the integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Product of the integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - Divides the value of the integers
 * and returns the value.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - calculates the division.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	return (a / b);
}
