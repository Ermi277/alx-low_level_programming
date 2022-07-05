#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check the character digit or not
 *
 * @c: iinput for the character
 * Return: 0
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	else
		return (0);
}
