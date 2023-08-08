#include "main.h"

/**
 * print_triangle- print triangle
 * @size: int
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <=  size; i++)
	{
		for (j = 0; j <  size; j++)
		{
			if (j < size - i)
			{
				_putchar(32);
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

}
