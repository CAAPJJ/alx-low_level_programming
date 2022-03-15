#include "main.h"
/**
 * _islower - checks for lowercase character
 *return:0 for uppercase, 1 for lowercase
 **/
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
