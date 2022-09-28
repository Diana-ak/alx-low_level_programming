#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, 
 * otherwise return 0
 * @n: integer
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks prime numbers
 * @n: integer to be checked
 * @i: iterator
 *
 * Return: integer
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % 1 == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
