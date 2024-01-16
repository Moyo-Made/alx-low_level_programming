#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * strtow - splits a string into words.
 * @str: the string
 * Return: A pointer to an array of strings (words).
*/
char **strtow(char *str)
{
	int word_count, i, j, k, l;
	char **words;
	
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0' ||  ispunct(str[i + 1])))
		{
			word_count++;
		}
	}
		if (word_count == 0)
		{
			return (NULL);
		}
		words = (char **)malloc((word_count + 1) * sizeof(char *));
		if (words == NULL)
		{
			return (NULL);
		}
		k = 0;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
			{
				if (i == 0 || str[i - 1] == ' ')
				{
					j = i;
					while (str[i] != ' ' && str[i] != '\0' && !ispunct(str[i]))
					{
						i++;
					}
					words[k] = (char *)malloc((i - j + 1) * sizeof(char));
					if (words[k] == NULL)
					{
						for (j = 0; j < k; j++)
						{
							free(words[j]);
						}
						free(words);
						return (NULL);
					}
					for (l = 0; j < i; j++, l++)
					{
						words[k][l] = str[j];
					}
					words[k][i -j] = '\0';
					k++;
				}
			}
			words[k] = NULL;
			return (words);
		}
}
