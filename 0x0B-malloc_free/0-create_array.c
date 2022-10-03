#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char
 * @c: characters to create
 * @size: size of the array
 *
 * Return: Returns Null for size 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str [i] = c;
		i++;
	}
	return (str);
}
