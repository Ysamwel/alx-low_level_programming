#include "main.h"
/**
 * binary_to_uint - function that converts binary number to unsigned int.
 * @b: points string of 0 and 1 characters
 * Return:converted number on success 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		numb <<= 1;
		if (b[i] == '1')
			numb += 1;
	}
	return (numb);
}
