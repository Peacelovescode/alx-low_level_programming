#include "main.h"

/**
 *print_last_digit - print the last digit
 *@t: the number
 *Return: value of the last digit
 */

int print_last_digit(int t)
{
	int x;

	if (t < 0)
		t = -t;
	x = t % 10;
	_putchar(x + '0');
	return (t % 10);
}
