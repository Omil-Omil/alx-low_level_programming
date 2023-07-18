#include "main.h"
/**
 * _memset - fill memory block using a specific value
 * @s: initial adress of memory which is to be filled
 * @b: the required value
 * @n: number of bytes that is to be changed
 *
 * Return: final array with changed value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
