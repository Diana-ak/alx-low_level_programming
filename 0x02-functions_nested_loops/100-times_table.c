#include "main.h"

/**
 * print_times_table - prints times table
 *@n: n is integer
 *
 *Return: times table
 */

void print_times_table(int n)
{
	int r, c, p;

	if (n >= 0 && n < 15)
	{
		for (r = 0; r <= n, r++)
		{
			for (c = 0; c <= n, c++)
			{
				p = r * c;
				if (c = 0)
					_putchar('0');
				else if (p < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				else if (p >=10 && p<100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100 && p < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((p / 100) % 100) + '0');
					_putchar((p % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
