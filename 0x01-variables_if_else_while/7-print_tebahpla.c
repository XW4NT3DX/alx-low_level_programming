#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * Description: using putchar to print alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar (i);
		i--;
	}
	putchar('\n');
	return (0);
}
