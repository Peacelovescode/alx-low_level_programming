#include "main.h"

/**
 * _puts -  puts a string in the character
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
