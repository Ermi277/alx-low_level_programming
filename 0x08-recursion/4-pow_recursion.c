#include "main.h"

/**
 * _pow_recursion - calculate the y power of x
 * @x: num 1
 * @y: num 2
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
