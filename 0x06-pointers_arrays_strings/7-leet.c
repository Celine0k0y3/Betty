#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int k, y;

	char s1[] = "aAeEoOtTlL";

	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[k] == s1[y])
			{
				n[k] = s2[y];
			}
		}
	}
	return (n);
}
