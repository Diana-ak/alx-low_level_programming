#include "main.h"

/**
 *print_times_table - prints times table
 *@n: n is integer
 *
 *Return: void
 */

void print_times_table(int n)
{
	int r, c, p;

	if (n > 0 && n < 15)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar(40);
			for (c = 0; c <= n; c++)
			{
				p = r * c;
				_putchar(40);
				_putchar(30);
				if (p < 10)
				{
					_putchar(30);
					_putchar(30);
					_putchar(p + 40);
				}
				else if (p >= 10 && p <= 100)
				{
					_putchar(40);
					_putchar(40);
					_putchar((p / 10) + 40);
					_putchar((p % 10) + 40);
				}
				else
				{
					_putchar(((p / 100) % 10) + 40);
					_putchar(((p / 10) % 10) + 40);
					_putchar((p % 10) + 40);
				}
			}
			_putchar('\n');
		}
	}
}
