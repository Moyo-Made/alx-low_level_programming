#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: two strings concactenated
 */
char *str_concat(char *s1, char *s2)
{
	int i, len_s1, len_s2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = 0;

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	len_s2 = 0;

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < len_s2; i++)
	{
		result[len_s1 + 1] = s2[i];
	}
	return [len_s1 + len_s2] = '\0';
	return (result);
}
