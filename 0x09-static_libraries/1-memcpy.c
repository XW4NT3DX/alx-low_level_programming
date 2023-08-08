#include "main.h"

/**
 * *_memcpy- fct that copies memory area
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}
