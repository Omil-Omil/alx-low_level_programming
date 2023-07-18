#include "main.h"
/**
 * _strncpy - copy the string
 * @dest: the input
 * @src: the entered value
 * @n: the entered value
 *
 * Return: dest (succes)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
