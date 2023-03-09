/*
 * file - 2-strlen_recursion.c
 * Auth: smone
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: the string to be measured
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
