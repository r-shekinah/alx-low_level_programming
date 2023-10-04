#include <stdio.h>
/**
 * main - prints numbere of arguments passed into this program
 * Return: 0 (success)
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
