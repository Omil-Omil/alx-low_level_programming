#include <stdio.h>

/**
 * main - printsthe alphabet in lowecase, then in uppercase
 *
 * Return: Always 0 if not successful
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
