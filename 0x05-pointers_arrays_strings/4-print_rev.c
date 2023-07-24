#include"main.h"
/**
 *print_rev- a function that prints a string, in reverse,
 *followed by a new * *line.
 *@s:int
 *Return: 0
 */

void print_rev(char *s)
{
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		i--;
		_putchar(s[i]);
	}
}
