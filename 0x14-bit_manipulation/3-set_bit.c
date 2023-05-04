#include "main.h"
/**
 * set_bit - sets bit's value to 1 at a given index.
 * @index: bit is set at this index
 * @n: points where to alocate
 * Return: 1 ,-1 unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int map;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	map = 1 << index;
	*n = *n | map;

	return (1);
}
