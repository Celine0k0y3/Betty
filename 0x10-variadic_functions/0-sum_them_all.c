#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: integers to be assigned to the function
 * @...: a variable of parameters to be calculated
 *
 * Return: if n == 0 - 0
 * Otherwise - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
