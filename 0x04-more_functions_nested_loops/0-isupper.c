#include "main.h"

/**
 * _isupper- is uppercae
 * @c: char
 * Return: 1 if true
 * otherzise return 0
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);

	return (0);
}
