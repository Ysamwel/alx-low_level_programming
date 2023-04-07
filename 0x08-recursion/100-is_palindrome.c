#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_analyze - figures out if @s is palindrome
 * @s: base address
 * @n: left index
 * @o: right index
 * Return: 1 if palindrome 0 if not
 */

int pal_analyze(char *s, int n, int o)
{
	if (s[n] == s[o])
		if (n > o / 2)
			return (1);
		else
			return (pal_analyze(s, n + 1, o - 1));
	else
		return (0);
}

/**
 * is_palindrome - digits that remain same even when they are reversed
 * @s: string base address
 * Return: 1 if success 0 otherwise
 */

int is_palindrome(char *s)
{
	return (pal_analyze(s, 0 _strlen_recursion(s) - 1));
}
