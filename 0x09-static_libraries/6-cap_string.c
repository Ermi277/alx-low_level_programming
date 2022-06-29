#include "main.h"

/**
 * cap_string - change the first word to capital
 * @s: chararcter pointer
 * Return: no return
 */

char *cap_string(char *s)
{
	int ln = strlen(s);
	int i = 0;

	while (i < ln)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
