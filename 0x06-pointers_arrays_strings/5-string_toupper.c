#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @a: string to be changed
 *
 *Return: address to the string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
