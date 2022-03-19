#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Description: Prints the number with _putchar
 * Return: void.
 */

void print_numbers(void)
{
	int c;
for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
