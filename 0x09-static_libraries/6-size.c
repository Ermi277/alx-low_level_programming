#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Exit Point
 **/

int main(void)
{
	char chrTp;
	int intTp;
	long int lintTp;
	float fTp;
	long long int lliTp;

	printf("Size of a char: %zu byte(s)\n", sizeof(chrTp));
	printf("Size of an int: %zu byte(s)\n", sizeof(intTp));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lintTp));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lliTp));
	printf("Size of a float: %zu byte(s)\n", sizeof(fTp));
	return (0);
}
