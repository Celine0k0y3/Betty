#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;

	char temp1;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (aux < i)
	{
		temp1 = s[i];
		s[i] = s[aux];
		s[aux] = temp1;
		aux++;
		i--;
	}
}
