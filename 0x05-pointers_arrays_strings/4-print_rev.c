#include "main.h"

/**
 * print_rev - print the string in reverse
 * @s: pointer
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int i;
	long int len = strlen(s);

	for (i = len; i > 0; --i)
	{
		_putchar(s[i]);
	}
}
