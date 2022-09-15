#include "main.h"

/**
 *_isdigit - checks for a digit (0-9)
 *@c: c is a character
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	char c;

	c = '0';

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
