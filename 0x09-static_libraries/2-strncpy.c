#include "main.h"

/**
 * *_strncpy- copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: return pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
		else
			break;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (p);
}
