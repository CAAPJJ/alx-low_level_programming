#include "main.h"
/**
 * _abs - function that prints the absolute value of a number
 * @x: takes in an integer
 * Return: 1 if greaterthan 0, 0 if equal 0, positive if negative
 */
int _abs(int x)
{
if (x < 0)
return (x * -1);
return (x);
}
