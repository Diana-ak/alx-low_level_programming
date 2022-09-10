#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k, l;

	for (k = 0; k  < 9; k++)
	{
		for (l = k + 1; k < 10; k++)
		{
			putchar((k % 10) + '0');
			putchar((l % 10) + '0');
			if (k == 8 && l == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
