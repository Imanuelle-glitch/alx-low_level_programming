#include <stdio.h>
/**
 * main - program starts here
 *
 * Return: always 0
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa < 16; hexa++)
	{
		if (hexa < 10)
		{
			putchar(hexa + '0');
		}
		else
		{
			putchar(hexa - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
