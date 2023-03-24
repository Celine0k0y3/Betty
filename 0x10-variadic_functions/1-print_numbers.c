#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * void print_numbers - a function that prints numbers, followed by a new line.
 * @n: the number of integers that passed to function
 * @separator: the string to be printed between numbers
 *
 * ...: variable number of numbers to be printed.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list nums;
	unsigned int cell;

	va_start(nums, n);

	for (cell < 0; cell < n; cell++)
	{
		printf("%d", va_arg(nums, int));
	if (cell != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
