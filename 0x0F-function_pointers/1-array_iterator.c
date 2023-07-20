#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints array elem on newl
 * @array: the array
 * @size: how many elem to print
 * @action: pointer to print in regular or a hex
 * Return: void on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
