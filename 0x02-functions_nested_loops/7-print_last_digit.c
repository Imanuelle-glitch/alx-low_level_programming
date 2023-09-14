#include "main.h"
/**
 * print_last_digit - prints last digit of an integer
 * @n: the integer with last digit to print
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);
	return (last_digit);
}
