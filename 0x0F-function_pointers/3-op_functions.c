#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 *
 * @a: first number to added
 * @b: second number to added
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 *
 * @a: first number
 * @b: second number
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 *
 * @a: first number to be multiplied
 * @b: second number to be ltiplied
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 *
 * @a: first digit
 * @b: second digit
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of two numbers
 *
 * @a: first digit
 * @b: second digit
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
