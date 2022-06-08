#include <ctype.h>
#include "main.h"

/**
 * _islower(int c) - retunrns 1 or -1
 *
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
