#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer of a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *len = NULL;
	int p = 0, q = 0, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[p] != '\0')
		p++;

	while (s2[q] != '\0')
		q++;
	len = malloc((p + q + 1) * sizeof(char));
	if (len == NULL)
		return (NULL);
	for (r = 0; r < q; r++)
		len[p] = s1[r];
	p = r;
	for (r = 0; r < q; r++)
	{
		len[p] = s2[r];
		p++;
	}
	len[p] = '\0';
	return (len);
}
