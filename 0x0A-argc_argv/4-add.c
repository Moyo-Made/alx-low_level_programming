#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0(SUccess)
 */
int main(int argc, char *argv[])
{
	int num;
	int i;

	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		sum = sum + num;
	}

	printf("%d\n", sum);

	return (0);
}
