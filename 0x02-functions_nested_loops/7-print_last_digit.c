#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 *
 * @c: recive the number
 * Return: last digit
 **/

int print_last_digit(int c)
{
	char r;
	int x;

	x = abs(c) % 10;
	r = '0' + x;
	_putchar(r);
	return (x);
}
