#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - fuction returns the length of the string
 * @s: string pointer to pass the function
 *
 * Return: returns the length of string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (strlen(s));
}
