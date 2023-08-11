#include "main.h"

void print_array/**
		  * print_array - prints n elements of an array of integers
		  * @a - array
		  * @n - number of elements to be printed
		  */(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *a);
		if (i == n)
			break;
		printf(", ");
		a++;
		i++;
	}
	printf("\n");
}
