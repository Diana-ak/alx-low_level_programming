#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @accept: bytes to include
 * @s: initial segment of the string
 *
 * Return: returns number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		else
		{
			break;
		}

	}
	return (i);
}
