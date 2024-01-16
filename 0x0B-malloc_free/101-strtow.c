#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: the string
 * Return: A pointer to an array of strings (words).
*/
char **strtow(char *str)
{
	int word_count, i, j, word_index, start, word_length;
	char **words;
	
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word_count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '.'))
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
		word_index = 0;
		start = 0;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
			{
				if (i == 0 || str[i - 1] == ' ')
				{
					start = i;
				}
			}
			else if (i > 0 && str[i - 1] != ' ')
			{
				word_length = i - start;
				words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				for (j = 0; j < word_length; j++)
				{
					words[word_index][j] = str[start + j];
				}
				words[word_index][word_length] = '\0';
				word_index++;
			}
	}
	words[word_index] = NULL;
	return (words);
}
