#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new lineseparated by a comma
 * followed by a space should be printed in order
 * @n: number to start counting from
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
