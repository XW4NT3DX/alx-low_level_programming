#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *p = accept;


	while (*s)
	{
		accept = p;
		while (*accept)
		{
			if (*s == *accept)
			{
				i++;
				break;
			}
			accept++;
			if (*accept == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}



