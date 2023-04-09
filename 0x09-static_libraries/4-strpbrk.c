#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string @s
 * of any of the bytes in the string @accept
 * @s: string of the first occurance
 * @accept: any of the bytes in the string
 * Return: pointer to the byte in @s
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
