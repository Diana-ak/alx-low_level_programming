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

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				i++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
