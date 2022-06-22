#include "main.h"

/**
 * _puts_recursion - recursion first
 * @s: string pointer
 * Return: pointer
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
	_putchar(*s);
	s++;
	}
}
