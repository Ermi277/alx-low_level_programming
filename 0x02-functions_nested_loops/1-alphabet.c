#include <stdio.h>
#include "main.h"

/**
 * main - task 1
 *
 *
 * Return: always 0
 **/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
