#include <ctype.h>
#include "main.h"

int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else (islower(c) < 0)
		return (0);
}
