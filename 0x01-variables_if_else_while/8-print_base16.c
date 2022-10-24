#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;
	char alpha;

	for (k = '0'; k <= '9'; k++)
		putchar(k);
	
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	
	putchar('\n');
	return (0);
}
