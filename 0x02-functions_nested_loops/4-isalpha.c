#include "main.h"

int _isalpha/* _isalpha returns 1 for all letters and 0 otherwise
	     */(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
