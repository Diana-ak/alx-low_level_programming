#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succeed)
 */

int main(void)
{
	int a, b;
	for (a = 0; a <=98; a++)
	{
		for (b = a + 1; b <=99; b++)

		{
			putchar((a / 10) + '0');
			putchar((a % 10) + 'o');
			putcha ('');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			
			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
