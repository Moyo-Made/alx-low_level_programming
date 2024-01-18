#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 * 
 * Return: A pointer to the newly allocated concatenated
 * string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 == "";

	if (s2 == NULL)
		s2 == "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

		concat = malloc(sizeof(char) * (len_s1 + n + 1));

		if (concat == NULL)
			return (NULL);

		for (i = 0; i < len_s1; i++)
			concat[i] = s1[i];

		for (j = 0; j < n; j++)
			concat[i + j] = s2[j];

		concat[i + j] = '\0';

		return (concat);
}
