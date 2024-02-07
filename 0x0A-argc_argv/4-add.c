#include "main.h"
/**
 * main - addps positive numbers and prints result
 * Return: 0 if success, else non-zero
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
