#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - beginning of program
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
	alphabet = 'A';
/* reset alphabet to A for uppercase */

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
