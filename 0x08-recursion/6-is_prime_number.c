#include "main.h"

/**
 * prime - checks to see if number is prime
 * @i:int
 * @n:int
 * Return:int
 */

int prime(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (n > i / 2)
		return (1);
	else
		return (prime(n, i + 1));
}


/**
  * is_prime_number - states if number is prime
  * @n:int
  * Return:int
  */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime(n, 2));
}
