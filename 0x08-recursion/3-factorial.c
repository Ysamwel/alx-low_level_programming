#include "main.h"
/**
 * factorial - product of all positive integers less than or equal to @n
 * positive integer
 *
 * @n: integer given
 * Return: integer
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
