#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i;
	char *duplicate;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
