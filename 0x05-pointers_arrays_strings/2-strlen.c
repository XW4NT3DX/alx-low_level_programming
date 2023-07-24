#include"main.h"

/**
 *int_strlen-  a function that returns the length of a string.
 *@ : int
 *Return: 0
 */

int _strlen(char *s)
{
int i = 0;

	while ( *s !='\0')
	{
		 i++; s++;
	}

	return (i);


}
