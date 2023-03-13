#include "main.h"

/**
 * _strchr - Entry point
 * @s: input value
 * @c: input value
 *
 * Return: Always 0 (Succes)
 */
char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (&s[z]);
	}
	return (0);
}
