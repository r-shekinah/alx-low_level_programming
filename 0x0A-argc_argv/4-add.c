#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - evaluates and prints sum of valid arguments
 * Return: 0 (success) 1 (error)
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	/* returns if no number is passed to the program */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		/* controls checking of arguments' validity */
		for (i = 1; i < argc; i++)
		{
			/* controls checking of components of each argument for symbols */
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				/* returns if symbols present in any of the arguments */
				if (!(isdigit(argv[i][j])))
				{	printf("Error\n");
					return (1);
				}
			}
		}
	/* adds values of arguments which are all valid*/
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
	}
}
