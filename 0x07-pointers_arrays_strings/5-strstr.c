#include "main.h"

/**
 * _strstr - search substring
 * @haystack: string to look for in
 * @needle: string to be looked for
 * Return: pointer or 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *srh = haystack;
	char *str = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (srh);
		}
		needle = str;
		srh++;
		haystack = scanned;
	}
	return (0);
}
