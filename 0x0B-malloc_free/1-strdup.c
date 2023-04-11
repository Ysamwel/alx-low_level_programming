#include "main.h"
/**
 * _strdup - returns a pointer to a new allocated space in memory
 * @str: the string we are asked to duplicate
 * Return: pointer to a new allocated space, Null if insuficient
 * memory or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int j, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = (char *)malloc((sizeof(char) * length) + 1);
	if (dup == NULL)
		return (NULL);

	for (j = 0; j < length; j++)
		dup[j] = str[j];
	dup[j] = '\0';

	return (dup);
}
