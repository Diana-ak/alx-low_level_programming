#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int amount; /* cents to give back*/
	int coins;

	if (argc != 1)
	{
		printf("Error\n", argc);
		return (1);
	}
	else if (coins < 0)
	{
		printf("0\n");
	}
	amount = atoi(argv[coins]);
	while (amount == 1 || amount == 2 || amount == 5 ||
			amount == 10 || amount == 25)
		coins++;
	printf("%d\n", coins);
	return (0);
}
