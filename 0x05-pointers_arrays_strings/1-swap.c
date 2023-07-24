#include"main.h"
/**
 *swap_int- swapping values of two integers
 *@a: int
 *@b: int
 *Return : 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
