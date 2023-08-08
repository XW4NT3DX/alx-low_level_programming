#include "main.h"

/**
 * _islower - checks for lowercase character.
 *@c: ischaracter
 *
 * On error: return 0
 * Return: 1 if success
 */
int _islower(int c)
{

	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{return (0);
	}
}
