#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 *
 * Return: integer
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, o, _strlen_recursion - 1, &flag)
		return (flag);
}

/**
 * check - checks if a string is a palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 * @flag: flag to show if string is palindrome
 *
 * Return: void
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1. flag);
	}
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to use
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
