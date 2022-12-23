#include <main.h>
#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: the Character to write
 *
 * Return: on Success 1
 * on Errro, -1 is returned, and error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
