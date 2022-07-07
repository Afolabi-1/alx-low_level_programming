#include "main.h"

/**
 * print - prints
 * @var: a variable
 */

void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10));
}

/**
 * print_times_table - prints n times table
 * @n: number
 */

void print_times_table(int n)
{
	int ii, jj, mul;

	if (n < 0 || n > 15)
		return;
	for (ii = 0; ii <= n; ii++)
	{
		for (j = 0; jj <= n; jj++)
		{
			mul = ii * jj;
			if (jj == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mul);
			}
			else if (mul < 100)
			{
				_putchar(' ');
				print(mul);
			}
			else
			{
				print(mul);
			}
			if (jj < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
