#include"main.h"
/**
 *print_rev- a function that prints a string, in reverse,
 *followed by a new * *line.
 *@s:int
 *Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int a = i;

	while (s[i] != '\0')
	{
		i++;
	}
	while (s[a] != '\0')
	{
		a--;
		_putchar(s[i]);
	}
}
