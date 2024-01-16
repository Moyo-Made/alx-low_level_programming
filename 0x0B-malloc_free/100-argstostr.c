#include "main.h"
#include <stdlib.h>
/**
 * argstostr -  function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: Always zero
*/
char *argstostr(int ac, char **av)
{
	int i, j, index, total_length;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			result[index++] = av[i][j++];
		}
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}
