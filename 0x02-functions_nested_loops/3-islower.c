#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: is the parameter to be checked
 * Return: 1 if char is lowercase
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
