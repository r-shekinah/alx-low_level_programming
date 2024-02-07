#include "main.h"
/**
 * main - prints number of arguments passed to it
 * Return: 0 if success, else non-zero
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (EXIT_SUCCESS);
}
