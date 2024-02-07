#include "main.h"
/**
 * main - multiplies two numbers and prints result
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 if success, else non-zero
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", i);
	}
	return (EXIT_SUCCESS);
}
