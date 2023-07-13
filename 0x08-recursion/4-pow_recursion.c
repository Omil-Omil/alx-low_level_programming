#include "main.h"
/**
 * pow_recursion -returns the value of x raised to power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * pow_recursion(x, y - 1));
}
