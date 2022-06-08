#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 *
 *@x: recive the number
 * Return: last digit
 **/

int print_last_digit(int c)
{
	char r;

	r = '0' + c % 10;
	_putchar(r);
	return (c % 10);
}	
