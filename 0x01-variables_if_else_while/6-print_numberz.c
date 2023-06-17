#include <stdio.h>

/**
 * main - Prints all single digit numbers of base tenstarting from zero
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
