#include "main.h"
#include <unistd.h>

/**
 * _putchar - to write the character c to stdout
 * @c: The character to print
 *
 * Return: Always 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
