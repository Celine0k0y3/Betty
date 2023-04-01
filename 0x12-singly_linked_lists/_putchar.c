#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout.
 * @t: The char to print.
 *
 * Return: On Success 1
 * On error, -1 is returned, and errno is set appropritely.
 */
int _putchar(char t)
{
	return (write(1, &c, 1));
}
