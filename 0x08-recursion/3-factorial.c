#include "main.h"

/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */

int factorial(int n)
{

	int fact;

	if (n < 0)
	{
		reurn(-1);
	}
	else if (n == 0)
	{
		retrun(1);
	}
	return (n * factorial(n - 1));
}


