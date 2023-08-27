#include "main.h"
/**
 * print_triangle - t prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, m;

		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
				_putchar(32);
			for (m = 0; m <= i; m++)
				_putchar(35);
			_putchar('\n');
		}
	}
}

