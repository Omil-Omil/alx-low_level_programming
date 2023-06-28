#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer parameter
 *
 * Return: Always 0
 */
void print_numbers(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(4);
		i = -i;
	}
	if (i / 100)
	{
		print_numbers(i / 10);
	}
	_putchar(i % 10 + '0');
}
