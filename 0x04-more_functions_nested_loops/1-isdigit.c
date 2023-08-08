#include "main.h"

/**
 * _isdigit- is digit
 * @c: char
 * Return: 1 if true
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);

	return (0);
}
