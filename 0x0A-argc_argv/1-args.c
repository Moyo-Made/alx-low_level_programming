#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("Number of arguments: %d\n", argc - 1);

	return (0);
}
