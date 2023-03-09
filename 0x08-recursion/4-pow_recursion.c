#include "main.h"

/**
 * _pow_recursion - a function that returns the value
 *  of x raised to the power of y
 *  @x: the number to be raised
 *  @y: the power
 *
 *  Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (result);
}
