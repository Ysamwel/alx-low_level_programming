#include "main.h"
/**
 * _strspn - calculates number of bytes in the intial segment of @s
 * @s: consists only of bytes from @accept
 * @accept: the bytes
 * Return: the length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != 32)
		{
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[j] == accept[k])
					i++;
			}
		}
		else
			return (i);
	}
	return (i);
}


