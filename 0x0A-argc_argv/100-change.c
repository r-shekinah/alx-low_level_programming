#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum coins to make change for money
 * Return: 0 (success) 1 (error)
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int coins = 0, change;
	/* returns if argument provided to the function is not one in total*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		/* returns if money for which change is made is negative or equal to 0 */
		if (change <= 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			/**
			 * decreases change by maximum available denomination
			 * and increases coin count by 1 for each iteration
			 */
			while (change != 0)
			{
				if (change >= 25)
					change = (change - 25);
				else if (change >= 10)
					change = (change - 10);
				else if (change >= 5)
					change = (change - 5);
				else if (change >= 2)
					change = (change - 2);
				else if (change >= 1)
					change = (change - 1);
				coins += 1;
			}
			printf("%d\n", coins);
			return (0);
		}
	}
}
