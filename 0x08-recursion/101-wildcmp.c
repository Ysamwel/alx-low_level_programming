#include "main.h"
/**
 * str_analyze - analyzes if strings are identical
 * @s1: base address
 * @s2: base address
 * @a: left index
 * @b: special index
 * Return: 1 if positive 0 if otherwise
 */



int str_analyze(char *s1, char *s2, int a, int b)
{
	if (s1[a] == '\0' && s2[b] == '\0')
		return (1);
	if (s1[a] == s2[b])
		return (str_analyze(s1, s2, a + 1, b + 1));
		if (s1[a] == '\0' && s2[b] == '*')
				return (str_analyze(s1, s2, a, b + 1));
				if (s2[b] == '*')
				return (str_analyze(s1, s2, a + 1, b) || str_analyze(s1, s2, a, b + 1));
				return (0);
}
/**
 * wildcmp - finds if strings are considered identica
 * @s1: strin
 * @s2: string
 * Return: 1 if identical or 0 if not
 */

				int wildcmp(char *s1, char *s2)
				{
				return (str_analyze(s1, s2, 0, 0));
				}
