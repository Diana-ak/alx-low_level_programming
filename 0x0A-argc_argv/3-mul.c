#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int product = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < argc; j++)
		{
			printf("%d\n", argv[i][j]);

			i = atoi(argv[i]);
			j = atoi(argv[j]);
			product = i * j;
		}
		printf("product = %d\n", product);
	}
	return (0);
}
