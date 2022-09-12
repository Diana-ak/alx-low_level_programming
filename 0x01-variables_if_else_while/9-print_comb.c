#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar((k % 10) + '0');
		if (k==9)
			continue;

			putchar(',');
			putchar(' ');
	
	}
	putchar('\n');
	return (0);
}
