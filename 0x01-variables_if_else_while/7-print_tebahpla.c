#include <stdio.h>
/**
 * main - program starts here
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');

	return (0);
}
