#include "main.h"

/**
 * *_strcat- function that concatenates two strings
 * @dest: char
 * @src: char
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;


	while (*dest)
	{
		dest++;
	}
		if (*dest == '\0')
		{
			while (*src)
			{
				*dest = *src;
				src++;
				dest++;
			}
		}
	return (p);
}
