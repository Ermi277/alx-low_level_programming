#include <stdio.h>
#include "main.h"

/**
 * largest_number - returns the largest of 3 number
 * Return: largest number
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\m", largest);

	return (0);
}
