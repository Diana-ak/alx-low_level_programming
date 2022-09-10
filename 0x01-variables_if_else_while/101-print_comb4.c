#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k, l, m;

	for (k = 0; l < 8; k++)
	{
		for (l = k + 1; l < 9; l++)
		{
			for (m = l + l; m < 10; m++)
			{
				putchar((k % 10) + '0');
				putchar((l % 10) + '0');
				putchar((m % 10) + '0');

				if (k == 7 && l == 8 && m == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
