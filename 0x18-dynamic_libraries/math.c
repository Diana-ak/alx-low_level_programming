#include <stdio.h>
#include "100-operations.h"

/**
 * add - add numbers
 * @num1: first number
 * @num2: second number
 * return: sum
 */
int add(int num1, int num2)
{
	int a, b, sum;
	num1 = a, num2 = b;

	sum = a + b;
	printf("sum = %d", sum);

	return (sum);
}

/**
 * sub - subtracts numbers
 * @num1: first number
 * @num2: second number
 * return: difference
 */
int sub(int num1, int num2)
{
	int a, b, difference;
	num1 = a, num2 = b;

	difference = a - b;
	printf("difference = %d", difference);

	return (difference);
}

/**
 *  mul - multiply numbers
 *@num1: first number
 *@num2: second number 
 * return: product
 */
int mul(int num1, int num2)
{
	int a, b, product;
	num1 = a, num2 = b;

	product = a * b;
	printf("product = %d", product);

	return (product);
}

/**
 * div - divides numbers
 * @num1: first number
 *@num2: first number
 *return: result
 */
int div(int num1, int num2)
{
	int a, b, result;
	num1 = a, num2 = b;

	result = a / b;
	printf("result = %d", result);

	return (result);
}

/**
 * mod -finds modulent of numbers
 * @num1: first number
 * @num2: first number
 * return: module
 */
int mod(int num1, int num2)
{
	int a, b, module;
	num1 = a, num2 = b;

	module = a % b;
	printf("module = %d", module);

	return (module);
}
