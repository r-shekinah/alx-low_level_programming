#include "main.h"

int _islower/* _islower returns 1 for lowercase input
	     * and 0 otherwise
	     */(int c)

{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
