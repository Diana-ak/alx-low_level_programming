#include "main.h"

/**
 * print_alphabet - lowercase, followed by new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

	round++;
	}
}
