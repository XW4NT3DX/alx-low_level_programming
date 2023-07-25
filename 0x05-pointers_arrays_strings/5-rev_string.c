#include"main.h"

/**
 *rev_string- description
 *@s: int
 *Return: 0
 */
void rev_string(char *s)
{
	char *p = s;
	char a;

	while (*s)
	{
		s++;
	}
	s--;

	while (p < s)
	{
		a = *s;
		*p = *s;
		*p = a;
		p++;
		s--;
	}

}

