#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for money.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{


	int i, money;
	int centsArr[] = {25, 10, 5, 2, 1};
	int size = sizeof(centsArr) / sizeof(int);
	int coins = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			coins += money / centsArr[i];
			money %= centsArr[i];
		}

		printf("%d\n", coins);
		return (0);
	}

}
