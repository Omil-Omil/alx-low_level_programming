#include "main.h"
/**
 * _isalpha - check alphabetical character
 * @c: input value
 * Return: 1 on success, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
