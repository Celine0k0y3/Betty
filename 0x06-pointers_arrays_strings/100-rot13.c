#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13.
 * @n: pointer to string parameters
 *
 * Return: *n
 */

char *rot13(char *n)
{
	int a;
	int b;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (n[a] == data[b])
			{
				n[a] = datarot[b];
				break;
			}
		}
	}
	return (0);
}
