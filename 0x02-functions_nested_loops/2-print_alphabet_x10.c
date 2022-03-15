#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times in lowercase
 *
 **/
void print_alphabet_x10(void)
{int x;
for (x =0;x<=9;x++)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
_putchar('\n');
}
