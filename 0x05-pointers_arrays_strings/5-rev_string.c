#include <stdio.h>
#include "main.h"

/**
 * rev_string - function to reverse string
 * @s: string to be reverses
 *
 */

void rev_string(char *s)
{
	char temp;
	int i, g;

	for (i = 0; s[i] != 0; i++)
	for (g = 0; g < i / 2; g++)
	{
		tmp = s[i];
		s[i] = s[g];
		s[g] = tmp;
		g = -= 1;
	}
}
