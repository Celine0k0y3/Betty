#include "main.h"
#include <stdio.h>

/**
 * _atoi - a program that multiplies two numbers.
 * @s: string to convert
 *
 * Return:int converted from string
 */

int _atoi(char *s)
{
	int i, j, k, len, n, m, digit;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	m = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '_')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
		n = n * 10 + digit;
		m = 1;
		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;

		m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies ywo numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

