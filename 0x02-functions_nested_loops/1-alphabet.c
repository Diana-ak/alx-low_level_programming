#include "main.h"

/**
 *print_alphabet - lowercase. followed by new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');
}
