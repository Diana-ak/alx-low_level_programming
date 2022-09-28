#include "main.h"

int _sqrt(int n, int i)

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to square
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (n);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 *@n: integer
 *@i: iterator
 *
 * Return: integer
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	else if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
