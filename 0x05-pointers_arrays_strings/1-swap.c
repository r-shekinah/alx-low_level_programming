#include "main.h"

void swap_int/**
	      * swap_int - swaps the values of two integers
	      */(int *a, int *b)
{
	int *r = *a;

	int *s = *b;

	*a = *s;
	*b = *r;
}
