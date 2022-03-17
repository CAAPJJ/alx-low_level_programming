#include "main.h"
/*
 * _isupper - checks if it is uppercase character.
 * @i: input character.
 * Return: 1 if uppercase character, 0 if its not uppercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
