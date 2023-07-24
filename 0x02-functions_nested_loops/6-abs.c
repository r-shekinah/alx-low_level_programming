#include "main.h"

int _abs/* prints the absolute value of number
	 * return : always 0
	 */(int i)
{

	if (i < 0)
	{
		return (i * -1);
	}
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return ('0');
	}
}
