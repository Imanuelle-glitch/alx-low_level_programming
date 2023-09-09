#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - always main
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
