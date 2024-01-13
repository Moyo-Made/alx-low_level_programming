#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * using at most n bytes from src
 * @dest: value entered
 * @src: value entered
 * @n: value entered
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
