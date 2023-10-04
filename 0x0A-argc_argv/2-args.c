#include <stdio.h>
/**
 * main - prints function name and all arguments received
 * Return: 0 (success)
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
