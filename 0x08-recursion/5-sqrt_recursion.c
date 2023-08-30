#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * @guess: square root
 * Return: int
 */
int square(int n, int guess);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}



/**
 * square - returns square root of a num
 * @n: number
 * @guess: square root
 * Return: int
 */
int square(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (square(n, guess + 1));
	else
		return (-1);
}
