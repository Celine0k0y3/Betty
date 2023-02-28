#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the converted int from the string
 */
int _atoi(char *s)
{
	int i, j, k, len, x, digit;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	x = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && x == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;

		}
		i++;
	}
	if (x == 0)
		return (0);
	return (k);
}
