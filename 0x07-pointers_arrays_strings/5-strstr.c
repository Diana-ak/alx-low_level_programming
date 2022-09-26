#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string with substring
 * @needle: substring to be located
 *
 * Return: returns to s or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle(s) != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] == needle[s])
			{
				haystack++;
				return (s);
			}
			else
				return (NULL);
		}
		haystack++;
	}
}
