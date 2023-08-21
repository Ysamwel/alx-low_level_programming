#include "main.h"
/**
 * _memcpy - copies @n bytes from memory area @src to memory area @dest
 * @n: bytes function copies from memory area
 * @src: original memory area
 * @dest: new memory area
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
