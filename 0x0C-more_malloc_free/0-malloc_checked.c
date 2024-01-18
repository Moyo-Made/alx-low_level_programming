#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: integer to allocate
 * 
 * Return: a function that allocates memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr; 

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
