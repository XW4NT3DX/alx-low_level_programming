#include "main.h"

/**
 * _strlen- lenght of a string
 * @s: char
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
