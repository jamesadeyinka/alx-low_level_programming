#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, a);
	}
	else if (a == 0)
	{
		printf("last digit of %d is %d and is 0", n, a);
	}
	else
	{
		printf("last digit of %d is %d and is less then 6 and not 0", n, a);
	}
	return (0);
}
