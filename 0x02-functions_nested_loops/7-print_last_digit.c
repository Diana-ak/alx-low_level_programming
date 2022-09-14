#include "main.h"

/**
 * print_last_digit - print last digit
 *@n: n is an integer
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
