#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can
 * be considered identical, otherwise return 0
 * @s1: first string to compare
 * @s2: string to be compared to
 *
 * Return: integer
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
