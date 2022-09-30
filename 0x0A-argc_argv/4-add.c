#include <stdio.h>
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
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argv[argc])
			printf("0\n")
	}
	for (i = 0; argv[i] != '\0'; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
	printf("total = %d\n", sum);
	return (0);
}
