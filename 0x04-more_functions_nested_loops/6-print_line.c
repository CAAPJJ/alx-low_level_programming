#include "main.h"
/**
 * print_line - prints a straight line n times
 * @n: number of line to be printed
 * return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
