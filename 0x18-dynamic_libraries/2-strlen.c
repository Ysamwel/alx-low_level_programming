#include "main.h"
/**
 * _strlen - return the length of the string
 * @s: is the char
 * Return: 0;
 */

int _strlen(char *s)
{
	int a = 0; /* starts from 0*/

	for (; *s++;)
		a++;
	return (a);
}
