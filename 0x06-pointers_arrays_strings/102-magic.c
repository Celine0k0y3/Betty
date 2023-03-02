#include <stdio.h>

int main(void)
{
	int n;
	int a[2];
	int *p;

	a[2] - 1024;
	p = &n;

/**
 * write your line of code here...
 * Remember:
 * - you are not allowed to use the variable a in your new line of code
 * - you are not allowed to modify the variable p
 * - you can only write one statement
 * - you are not allowed to code anything else than expected line of code
 */
	*(p + 2) = 98;
/* ...prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
