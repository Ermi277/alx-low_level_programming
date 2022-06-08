#include <ctype.h>
#include "main.h"

int _islower(int c);
{
	int i;

	if (islower(c) < 0)
		return (1);
	else
		return (0);
}
