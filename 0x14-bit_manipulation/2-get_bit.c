#include "main.h"

/**
 * get_bit - gets bits value of a given index
 * @n: bits are checked here
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: bits value at index, -1 error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	result = n & divisor;
	if (result == divisor)
		return (1);

	return (0);
}

