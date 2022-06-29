#include <stdio.h>
/**
 * maint - entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int a = 0;
	int b = 10;

	while (a < b)
	{
		printf("%d\n", a);
		a++;
	}
	return (0);
}
