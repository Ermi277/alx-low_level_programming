#include "main.h"

/**
 * _puts_recursion - recursion first
 * @s: string pointer
 * Return: pointer
 */

void _puts_recursion(char *s)
{
	if (s != "")
	{
		_putchar(*s);
		++s;
		if (*s != '\0')
		{
			_puts_recursion(s);
		}
		else
			_putchar('\n');
	}
}
