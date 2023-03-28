#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int n = 0, a, z;
	char c;

	while (s[n] != '\0')
	{
		n++;
	}
	z = n - 1;
	for (a = 0; z >= 0 && a < z; z--, a++)
	{
		c = s[a];
		s[a] = s[z];
		s[z] = c;
	}
}
