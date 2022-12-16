#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: input character
 *
 * Return: void
 */
void print_diagonal(int n)
{
int c;
for (c = 0; c < n; c++)
{
_putchar('\\');
}
_putchar('\n');
}
