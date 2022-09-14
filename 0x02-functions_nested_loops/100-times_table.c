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

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar(48);
			for (c = 1; c <= n; c++)
			{
				p = r * c;
				_putchar(44);
				_putchar(32);
				if (p < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(p + 48);
				}
				else if (p < 100)
				{
					_putchar(32);
					_putchar((p / 10) + 48);
					_putchar((p % 10) + 48);
				}
				else
				{
					_putchar(((p / 100) % 10) + 48);
					_putchar(((p / 10) % 10) + 48);
					_putchar((p % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
