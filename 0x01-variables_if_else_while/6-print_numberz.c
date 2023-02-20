#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	putchar(j);
	putchar('\n');

	return (0);
}
