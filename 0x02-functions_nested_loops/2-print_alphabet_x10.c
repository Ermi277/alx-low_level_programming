#include "main.h"
/**
 * print_alphabet_x10 - task 2
 *
 *
 * Return: no return
 **/

void print_alphabet_x10(void)
{
	char i;
	int n;

	n = 0;
	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		n++;
	}
}
