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
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
			continue;

		putchar (i);
		i++;
	}
	putchar('\n');
	return (0);
}
