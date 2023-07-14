#include<stdio.h>
#include<stdlib.h>
/**
 * main - Prints the alphabet
 *
 * Description: print alphabets only with putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		purchar(i);
		i++;
	}
	int a = 65;

	while (a <= 90)
	{
		purchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
