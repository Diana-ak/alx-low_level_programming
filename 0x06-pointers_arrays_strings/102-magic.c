#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * you are not allowed to use a
	 * you are not allowed to modify p
	 * You can only write one statement
	 * you are not allowed to use ,
	 *You are not allowed to code anything else than the line of
	 *line of code at the expected line
	 *Your code should be written at line 19, before the ;
	 */

	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
