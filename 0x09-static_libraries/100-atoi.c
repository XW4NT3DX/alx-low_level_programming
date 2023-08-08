#include "main.h"

/**
 * _atoi- convert a string to an integer
 * @s: char
 * Return: 0
 */

int _atoi(char *s)
{
	int count = 0;
	int sign = 1;
	int last = 0;

	while (*s)
	{
		if (*s == 45)
		{
			if (last == 0)
			{
				sign = -sign;
			}
			else
			{
				break;
			}
		}
		else if (*s <= '9' && *s >= '0')
		{
			last = 1 ;
			count = count * 10 + (*s - 48);	
		}
		else if (last == 1)
			break;
		s++;
	}
	if (count == 0 || count == 1)
	{
		return (0);
	}
	else if (sign == -1)
	{
		return (-count);
	}
	else
	{
		return (count);
	}
}
