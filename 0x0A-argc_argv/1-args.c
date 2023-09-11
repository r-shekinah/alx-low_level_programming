#include <stdio.h>
/**
 * main - prints nummber of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (SUCCESS)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
