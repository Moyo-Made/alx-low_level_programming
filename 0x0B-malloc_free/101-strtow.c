#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }

        str++;
    }

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    int words, i, j, k, len;
    char **result;

    if (str == NULL || *str == '\0')
        return NULL;

    words = count_words(str);

    if (words == 0)
        return NULL;

    result = (char **)malloc((words + 1) * sizeof(char *));

    if (result == NULL)
        return NULL;

    len = 0;

    for (i = 0, k = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            j = i;
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
            {
                i++;
            }

            result[k] = (char *)malloc((i - j + 1) * sizeof(char));
            if (result[k] == NULL)
            {
                for (j = 0; j < k; j++)
                {
                    free(result[j]);
                }
                free(result);
                return NULL;
            }

            for (j = 0; j < i - k; j++)
            {
                result[k][j] = str[len + j];
            }
            result[k][j] = '\0';
            k++;
            len += i;
        }
    }

    result[k] = NULL;

    return result;
}
