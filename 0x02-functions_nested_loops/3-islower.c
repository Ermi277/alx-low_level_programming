#include <ctype.h>
#include "main.h"

/**
 * _islower - to checke upper or lower
 * 
 * @c - is an integer
 * Return: 0
 **/

int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
