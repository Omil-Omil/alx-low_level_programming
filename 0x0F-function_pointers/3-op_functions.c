#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of the numbers
 * @a: the first number to be added
 * @b: the second number to be added
 *
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers
 * @a: the first number to subtract
 * @b: the second number to subtract
 *
 * Return: the difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers
 * @a: the first number to multiply
 * @b: the second number to multiply
 *
 * Return: the product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the quatient of two numbers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: The quatient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of two numbers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: The remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
