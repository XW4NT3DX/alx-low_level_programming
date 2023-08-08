#include "main.h"

/**
 * *_strcpy- copies string
 * @dest: char
 * @src: char
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (p);
}
