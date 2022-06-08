#include <ctype.h>
#include "main.h"

/** _isalpha - checks alpha and upper or lowercase
 *
 *
 * @c: recive an integer
 * Return: 0
 **/

int _isalpha(int c)
{
	if ((islower(c) <= 0 && isalpha(c) > 0) || (islower(c) >= 0 && isalpha(c) > 0))
		return (1);
	else
		return (0);
}
