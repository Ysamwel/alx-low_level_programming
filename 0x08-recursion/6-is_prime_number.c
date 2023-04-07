#include "main.h"
/**
 * math - finds if number is prime - divisible to 1 or itself
 * @x: int
 * @y: int
 * Return: int
 */



int math(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (math(x + 1, y));
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: int to be inspected
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (math(2, n));
}
