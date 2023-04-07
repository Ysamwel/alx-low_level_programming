#include "main.h"
/**
 * _square_root -gets the square root
 * @i: interger
 * @j: result int
 * Return: int
 */

int _square_root(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)return (-1);
	return (_square_root(i + 1, j));
}



/**
 * _sqrt_recursion - returns natural square root of @n
 * @n: the int to find the square root
 * Return: natural square root or -1
 */


int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_square_root(1, n));
}
