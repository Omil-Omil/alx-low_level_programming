#include "main.h"
/**
 * *_print_rev_recursion - prints atring in reverse
 * @s: the string t be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
