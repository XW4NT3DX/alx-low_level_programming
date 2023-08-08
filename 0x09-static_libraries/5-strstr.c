#include "main.h"

/**
 * *_strstr- locates a substring
 * @haystack: char
 * @needle: char
 * Return: a pointer to the beginning of the located located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *n = needle;


	while (*haystack)
	{
		p = haystack;
		needle = n;
		while (*needle && *haystack && *haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (p);
		haystack = p + 1;
	}
	return (NULL);
}
