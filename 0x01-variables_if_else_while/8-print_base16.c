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
	int i = 48;
	int a = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
