#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: integer to allocate
 * Return: a function that allocates memory,
 * Exits with status 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		_putchar('e');
		_putchar('\n');
		exit(98);
	}
	return (ptr);
}
