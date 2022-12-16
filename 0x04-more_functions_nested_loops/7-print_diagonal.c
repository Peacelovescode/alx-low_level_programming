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

if (n <= 0)
	_putchar('\n');

for (c = 0; c < n; c++)
	{
	for (d = 0; d < x; d++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
