#include"main.h"

/**
 *_puts- prints a string
 *@str: string
 */

void _puts(char *str)
{
	char c;
	while (*str)
	{
		c = *str;
		_putchar(c);
		str++;
	}
	_putchar('\n');
}
