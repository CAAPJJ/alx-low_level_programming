#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @x: takes ln an integer
 * Return: returns output
 */
int print_last_digit(int x)
{
int ln = x % 10;
if (x < 0)
ln = ln * -1;
_putchar(ln + '0');
return (ln);
}
