#include <stdio.h>

/**
 * main - prints all possible different combintions of three digits
 *
 * Return: 0 (successful)
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
