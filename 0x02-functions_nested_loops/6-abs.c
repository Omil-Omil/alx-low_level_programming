#include "main.h"

/**
 * _abs -computes the bsolute value of an integer
 *
 * @a: number whose absolute valueis to be found
 *
 * Return: Absolute value of the number
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
