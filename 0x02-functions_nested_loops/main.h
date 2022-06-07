#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * main - confuse
 *
 *
 * Return: 0
 **/
int print_alphabet()
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
#endif
