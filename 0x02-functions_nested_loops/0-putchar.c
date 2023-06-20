#include <main.h>
/**
 * main - entry point
 *
 * Description: a c program that prints
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	char name[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(name[ch]);
	_putchar('\n');

	return (0);
}
