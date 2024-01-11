#include "main.h"

/*
 * factorial - Returns the factorial of a given number
 * @n: the number to input
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
