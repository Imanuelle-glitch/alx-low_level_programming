#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character c to stdout
 * @c: the character to print
 *
 * Return: 0 on success, -1 on error and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
