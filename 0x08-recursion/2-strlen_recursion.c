#include "main.h"

/**
* _strlen_recursion - calculate the total number of characters
* @s: string to be counted
* Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
