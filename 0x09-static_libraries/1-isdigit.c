#include "main.h"
/**
 * _isdigit - checks for digits between 0 and 9
 * @c: the character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
