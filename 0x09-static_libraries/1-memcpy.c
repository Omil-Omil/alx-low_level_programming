 #include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory where it is stored
 * @src: memoriey where it is copied
 * @n: number of bytes
 *
 * Return: copied memory with chaged n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
			n--;
	}
	return (dest);
}
