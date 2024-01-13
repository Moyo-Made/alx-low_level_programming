#include "main.h"

/**
 * _strncpy- to copy a string
 * @dest: value to input
 * @src: value to input
 * @n: value to input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];

		j++;
	}

	while (j < n)
	{
		dest[j] != '\0';
		j++;
	}

	return (dest);
}
