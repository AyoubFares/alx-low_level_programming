#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the haracter c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
