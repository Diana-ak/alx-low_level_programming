#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints up to 98
 *@n: input integer
 *
 *Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{ 
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}
