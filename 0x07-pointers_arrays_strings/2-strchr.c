#include "main.h"

/**
 * _strchr - search char
 * @s: pointer
 * @c:character
 * Return: s or  0
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
