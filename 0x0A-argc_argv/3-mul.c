#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (SUCCESS) 1 (ERROR)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		int i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);

		return (0);
	}
}
