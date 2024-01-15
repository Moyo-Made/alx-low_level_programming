#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int amount;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins;
	int coins_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; sizeof(coins) / sizeof(coins[0]); i++)
	{
		num_coins = amount / coins[i];

		coins_count += num_coins;

		amount %= coins[i];
	}

	printf("%d\n", coins_count);

	return (0);
}
