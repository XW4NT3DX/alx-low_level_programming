#include "main"
/**
 * puts_recursion - prints a string, followed by a new line
 * @s: is a pointer to the string
 * Return: is void 
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
		_putchar('\n');
	else
		_putchar(*s);
		_puts_recursion(s + 1);

}
