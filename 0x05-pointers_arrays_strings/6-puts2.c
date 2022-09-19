#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other function of the string
 * @str: parameter of the string
 *
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		putchar(str[i]);
	putchar('\n');
}
