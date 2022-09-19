#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: string parameter
 * @n: number of array elements
 *
 */

void print_array(int *a, int n)
{
	int n, p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);

		if (p != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
	}
}
