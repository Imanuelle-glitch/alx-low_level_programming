#include <stdio.h>
/**
 * main - program starts here
 *
 * Return: always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');

		if (digit <= 9)
		{
			putchar(digit == 9 ? '$' : ',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
