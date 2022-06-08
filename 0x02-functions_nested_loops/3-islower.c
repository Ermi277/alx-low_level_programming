#include <ctype.h>
#include "main.h"

/**
 * _islower() - retunrns 1 or -1
 * c - just an int
 *
 * Return: 0
 **/

int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
