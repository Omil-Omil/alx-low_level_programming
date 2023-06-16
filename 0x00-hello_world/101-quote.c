#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	write(STDERR_FILENO, "and that piece of art useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
