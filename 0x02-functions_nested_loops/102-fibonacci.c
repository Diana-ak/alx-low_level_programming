#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Alwas 0 (Success)
 */
int main(void)
{
	long int sum;
	long int one, two;
	int count;

	sum = 0;
	one = 0;
	two = 1;
	count = 0;

	while (count < 49)
	{
		sum = one + two;
		printf("%li, ", sum);
		one = two;
		two = sum;
		count++;
	}
	sum = one + two;
	printf("%li, ", sum);

	return (0);
}
