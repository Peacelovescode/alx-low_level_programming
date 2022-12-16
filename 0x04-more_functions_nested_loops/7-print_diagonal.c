#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: input character
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int c, d;

	for (c = 0; c < n; c++)
	{
		for (d = 0; d < c; d++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (c < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
