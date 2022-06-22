#include "main.h"

/**
 * _puts_recursion - recursion first
 * @s: string pointer
 * Return: pointer
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_putchar('0' + '\n');
	++s;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}
