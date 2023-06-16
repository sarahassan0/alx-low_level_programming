#include <stdio.h>

/**
 *
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 * Save the result in the file 102-result
 * Your file should contain the exact result, no new line, no extra space
 *
 */
int is_palindrome(int n)
{
	int reversed = 0, original = n;
	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed == original;
}

int main()
{
	int largest_palindrome = 0;
	int i, j;

	for (i = 100; i < 1000; i++)
	{
		for (j = i; j < 1000; j++)
		{
			int product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}

	FILE *file = fopen("102-result", "w");
	if (file != NULL)
	{
		fprintf(file, "%d", largest_palindrome);
		fclose(file);
	}

	return 0;
}
