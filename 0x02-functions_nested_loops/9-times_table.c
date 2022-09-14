#include "main.h"

/**
 * times_table
 *
 * Return: times table
 */

void times_table(void)
{
	int row, colum, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colum = 0; colum <= 9; colum++)
		{
			product = (row * colum);
			if ((product / 10) > 0)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((product % 10) + '0');

			if (colum < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}
