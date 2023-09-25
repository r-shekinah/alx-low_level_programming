#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum amount of coins to make change for money
 * @argv: argument vector
 * @argc: argument count
 * Return: (0) success (1) error
 */
int main(int argc, char *argv[])
{
	int balance, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	balance = atoi(argv[1]);

	while (balance > 0)
	{
		if (balance >= 25)
			balance -= 25;
		else if (balance >= 10)
			balance -= 10;
		else if (balance >= 5)
			balance -= 5;
		else if (balance >= 2)
			balance -= 2;
		else if (balance >= 1)
			balance -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}