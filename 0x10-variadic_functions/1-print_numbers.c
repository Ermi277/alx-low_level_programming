#include "variadic_functions.h"

/**
 * print_numbers - print number
 * @separator: separator between each number
 * @n: number of argument
 * Return: no return
 */

void print_number(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != (n - 1))
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d%s", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
