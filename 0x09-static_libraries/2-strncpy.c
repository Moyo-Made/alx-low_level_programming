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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
