#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 *
 * Return: On Success 1.
 * On error, -1 is returned and errno is set appriopriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
