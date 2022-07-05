#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for upper case
 *
 * @c: accept character
 * Return: 0
 */

int _isupper(int c)
{
	if  (isupper(c) > 0)
		return (1);
	else
		return (0);
}
