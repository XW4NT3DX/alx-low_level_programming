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
	int i = 96;

	while (i < 122)
	{
		i++;
		if (i == 101 || i == 113)
			continue;

		putchar (i);

	}
	putchar('\n');
	return (0);
}
