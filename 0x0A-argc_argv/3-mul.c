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
	int i, j, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
		{
			printf("%d\n", argv[i][j]);

			i = atoi(argv[1]);
			j = atoi(argv[2]);
			product = i * j;
		}
		printf("%d\n", product);
	}
	return (0);
}
