#include"main.h"

/**
 *rev_string- description
 *@s: int
 *Return: 0
 */
void rev_string(char *s)
{
	char *p = &s;
	int a;

	while (*s)
	{
		s++;
	}
	while (p < s)
	{
		*s = a;
		*p = s;
		*p = a;
		p++;
		s--;
	}

}

