#include "main.h"

/**
 * print_number - prints an integer n
 *@n: integer to be printed
 */
void print_number(int n)
{
	unsigned int x1;

	if (n < 0)
	{
		x1 = -n;
		_putchar('-');
	} else
	{
		x1 = n;
	}

	if (x1 / 10)
	{
		print_number(x1 / 10);
	}

	_putchar((x1 % 10) + '0');
}