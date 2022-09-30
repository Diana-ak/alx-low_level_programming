#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, digit;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (i = 0; i >= 0; i++)
			printf("%s\n", argv[i]);

			if (argv[argc])
				printf("0\n");
			else if (i != digit)
				printf("Error\n");
			return (1);
	}
	sum += atoi(argv[i]);
	printf("total = %d\n", sum);

	return (0);
}
