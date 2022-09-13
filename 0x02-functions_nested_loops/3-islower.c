#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) -checks lowercase
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

	{
		return (0);
	}
}
