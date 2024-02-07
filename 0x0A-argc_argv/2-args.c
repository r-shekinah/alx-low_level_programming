#include "main.h"
/**
 * main - prints all command line arguments each followed by new line
 * Return: 0 if success, else non-zero
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (EXIT_SUCCESS);
}
