#include "main.h"

/**
 *_power - gets the (base ^ power)
 * @base: base of exponent
 * @pwr: power of exponent
 * Return: (base ^ power)
 */
unsigned long int _power(unsigned int base, unsigned int pwr)
{
	unsigned long int dgt;
	unsigned int i;

	dgt = 1;
	for (i = 1; i <= pwr; i++)
		dgt *= base;
	return (dgt);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: int to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, rslt;
	char flag;

	flag = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		rslt = n & div;
		if (rslt == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
