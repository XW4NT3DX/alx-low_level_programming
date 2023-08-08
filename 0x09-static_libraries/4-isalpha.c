#include "main.h"

/**
 * _isalpha - checks for lowercase character.
 *@c: ischaracter
 *
 * On error: return 0
 * Return: 1 if success
 */
int _isalpha(int c)
{

	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{return (0);
	}
}
