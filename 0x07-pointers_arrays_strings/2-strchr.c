#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: string of teh characters
 * @c: character in the string to be located
 *
 * Return: null if not found andc if found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s = c)
			s++;
		{
			return (c);
		}		
		else if (*s != c)
			s++;
		{
			return (NULL);
		}
	}
}

