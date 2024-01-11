#include "main.h"

/**
 *  _pow_recursion - Calculate the power of x raised to y
 *  @x: first vlaue to input
 *  @y: second value to input
 *
 *  Return:integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
