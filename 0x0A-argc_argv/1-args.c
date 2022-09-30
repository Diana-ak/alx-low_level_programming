#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	argc = argc;

	for (i = 0; i <= argc; i++)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
