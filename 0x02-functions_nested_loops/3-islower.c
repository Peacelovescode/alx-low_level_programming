#include "main.h"
/**
 *islower - checks only lowercase
 *@c: the character
 * Return: 1 if letter is lowercase if not always 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
