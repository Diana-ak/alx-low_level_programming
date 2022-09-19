#include <string.h>
#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string parameter
 *
 */
void puts_half(char *str)
{
	int i, p, q;

	p = strlen(str);
	if (p % 2 == 1)
	{
		q = p / 2 + 1;
	}
	else
	{
		q = p / 2;
	}
	for (i = q; i <  p; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
