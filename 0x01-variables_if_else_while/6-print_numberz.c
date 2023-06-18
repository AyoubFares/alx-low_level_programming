#include <stdio.h>
/**
 * main - prints single digits
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*converts to ascii*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
