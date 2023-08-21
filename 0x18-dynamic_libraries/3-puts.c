#include "main.h"
/**
 * _puts - prints string followed by a new line to stdout
 * @str: is the string
 * Return: length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
