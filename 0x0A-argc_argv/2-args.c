#include <stdio.h>
/**
 * main - function that prints all arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
