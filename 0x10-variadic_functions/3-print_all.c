#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *y, *z = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", z, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", z, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", z, va_arg(list, double));
				break;
			case 's':
				y = va_arg(list, char *);
				if (!y)
					y = "(nil)";
				printf("%s%s", z, y);
				break;
			default:
				i++;
				continue;

			}
			z = ", ";

			i++;
		}
	}
	printf("\n");
	va_end(list);
}
