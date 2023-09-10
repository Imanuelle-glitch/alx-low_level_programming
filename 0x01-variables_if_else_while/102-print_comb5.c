#include <stdio.h>
/**
 * main - program starts here
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int t1 = i / 10;
			int u1 = i % 10;
			int t2 = j / 10;
			int u2 = j % 10;

			putchar(t1 + '0');
			putchar(u1 + '0');
			putchar(' ');
			putchar(t2 + '0');
			putchar(u2 + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
