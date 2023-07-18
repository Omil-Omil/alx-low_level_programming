#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: char to be checked
 *
 * Return: 0(success), otherwise return 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);

	else
		return (1);
}
