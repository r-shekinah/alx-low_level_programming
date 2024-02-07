#include "main.h"
/**
 * change - prints minimum number of coins to make change
 * Return: 0 if success, else non-zero
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	else
	{
		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;
	}
	printf("%d\n", coins);
	return (EXIT_SUCCESS);
}
