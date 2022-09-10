#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit 1, digit 2;

	for (digit 1 = 0; digit 1 < 9; digit 1++)
	{
		for (digit 2 = digit 1 + 1; digit 2 < 10; digit 2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');
			if (digit1 == 8 && digit 2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
