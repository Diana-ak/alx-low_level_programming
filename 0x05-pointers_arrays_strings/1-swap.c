#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: first parameter to swap
 * @b: second parameter to swap
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
