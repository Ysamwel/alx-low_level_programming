#include "main.h"
/**
 * _strchr - returns a pointer to the first occurance of the character @c
 * in the string @s
 * @s: the string
 * @c: character of first occurance
 * Return: pointer to the first occurance of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
