#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 *
 * Return: 0 (successsful)
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
