#include "main.h"

/**
 *  _print_rev_recursion - Prints a string in reverse
 *  @s: The string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
