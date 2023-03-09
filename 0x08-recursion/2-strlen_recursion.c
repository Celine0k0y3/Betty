#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: input
 *
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
