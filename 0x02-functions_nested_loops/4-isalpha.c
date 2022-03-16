#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @x: takes in a character
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int x)
{
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
