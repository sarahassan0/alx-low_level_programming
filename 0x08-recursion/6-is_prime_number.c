#include "main.h"

/**
 * prime - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */


/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */

int check(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (n > i / 2)
		return (1);
	else
		return (prime(n, i + 1));
}
{
	if (n == 2)
	{
		return (1);
	}
	return (prime(n, 2));
}
