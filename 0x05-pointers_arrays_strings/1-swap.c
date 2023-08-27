#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: para 1
 * @b: para 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
