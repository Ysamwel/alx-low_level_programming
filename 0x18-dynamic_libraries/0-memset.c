#include "main.h"
/**
 * _memset - function that fills the first @n bytes of the memory area
 * pointed to by @s with the constant byte @b
 * @n: the bytes of the memory area pointed to by @s
 * @s: its with the constant byte @b
 * @b: points memory area
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
