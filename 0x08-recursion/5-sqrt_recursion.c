#include "main.h"


/**
 * _sqrt - checks for the square root
 * @i:int
 * @n:int
 *
 * Return: int
 */



int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(i + 1, n));
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: integer to find sqrt of
  * Return: natural square root
  */

int _sqrt_recursion(int n)
{

	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(1, n));
	}
}
