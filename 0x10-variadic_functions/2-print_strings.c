#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @n: is the number of strings passed to the function
 * @separator:  is the string to be printed between the strings
 *
 * Definition: if separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *c;
	unsigned int cell;

	va_start(strings, n);

	for (cell = 0; cell < n; cell++)
	{
		c = va_arg(strings, char*);

		if (c == NULL)
			printf("(nil)");

		else
			printf("%s", c);

		if (cell != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
