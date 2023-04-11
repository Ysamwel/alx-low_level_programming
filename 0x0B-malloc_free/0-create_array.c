#include "main.h"
/**
 * create_array - creates an array of chars, initializes it with a
 * specific char
 * @c: the value of bytes
 * @size: size of the array of char
 * Return: pointer to the array, NUll if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

