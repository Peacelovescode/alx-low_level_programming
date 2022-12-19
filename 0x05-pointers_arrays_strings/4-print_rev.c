#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: is a string
 *
 */

void print_rev(char *s)
{
	int h = 0;

	while (s[h] != '\0')
		h++;
	for (h = h - 1; h >= 0; h--)
		_putchar(s[h]);

	_putchar('\n');
}
