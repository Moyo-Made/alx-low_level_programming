#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - returns the index of the first element for which the
 * cmp function does not return 0
 * @array: array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: If no element matches & If size <= 0, return -1 
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
}
