#include "main.h"

/**
 * print_alphabet -  to print a-z
 *
 *
 * Return: no return
 **/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
