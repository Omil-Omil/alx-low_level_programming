#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: the number of parameters passed
 * @...:variable number of parameters to calculate the sum
 *
 * Return: if n == 0 - 0, else the sum of all parameterS
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
