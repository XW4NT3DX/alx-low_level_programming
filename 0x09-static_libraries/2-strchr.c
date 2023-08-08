#include "main.h"

/**
 * *_strchr- locates a char in a string
 * @s: char
 * @c: char
 * Return: pointer to the first occurrence of c, or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
