#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: the input string
 * Return: length on success
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
