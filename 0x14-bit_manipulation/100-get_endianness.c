#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 on big endian, 1 on little endian
 */
int get_endianness(void)
{
	int i;
	char *b;

	i = 1;
	b = (char *)&i;
	return (*b);
}
