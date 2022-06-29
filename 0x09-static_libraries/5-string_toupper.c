#include "main.h"

/**
 * string_toupper - to upper
 * @s: ponter character
 * Return: 0;
 */
char *string_toupper(char *s)
{
	int ln = strlen(s);
	int i = 0;

	while (i < ln)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	i++;
	}
	return (s);
}
