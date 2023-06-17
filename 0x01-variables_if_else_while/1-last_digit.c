#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: true and false validation
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit > 5)
	{
		printf("Last digit of n is %i and is greater than 5\n", digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of n is %i and is 0\n", digit);
	}
	else
	{
		printf("Last digit of n is %i and is less than 6 and not 0\n", digit);
	}
	return (0);
}
