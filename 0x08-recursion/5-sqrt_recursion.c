#include "main.h"

int find_sqrt(int num, int root);
/**
 * find_sqrt - finds the natural square root of a numbe
 * square root of a number.
 * @num: to find square root of
 * @root: the root of the tested
 * Return: if the number has a natural square root - the square root
 * if the number does not have a natural square root - -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
}
