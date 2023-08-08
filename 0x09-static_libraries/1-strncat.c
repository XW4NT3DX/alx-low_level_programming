#include "main.h"

/**
 * *_strncat- function that concatenates two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*dest)
	{
		dest++;
	}
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
	return (p);
}
