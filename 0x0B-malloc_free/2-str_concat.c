#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer of a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int y, z, length1, length2, length;
	char *array;

	length1 = length2 = 0;

	if (s1 != NULL)
	{
		y = 0;
		while (s1[y++] != '\0')
			length1++;
	}

	if (s2 != NULL)
	{
		y = 0;
		while (s2[y++] != '\0')
			length2++;
	}

	length = length1 + length2;
	array = (char *)malloc(sizeof(char) * (length + 1));
	if (array == NULL)
		return (NULL);

	for (y = 0; y < length1; y++)
		array[y] = s1[y];
	for (z = 0; z < length2; z++, y++)
		array[y] = s2[z];
	array[length] = '\0';
	return (array);
}
