#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int total_sum, sum, one, two;

	total_sum = 0;
	sum = 0;
	one = 0;
	two = 1;

	while (sum < 4000000)
	{
		sum = one + two;
		if (sum % 2 == 0)
		{
			tota_sum += sum;
		}
		one = two;
		two = sum;
	}
	printf("%li\n", tota_sum);

	return (0);
}
