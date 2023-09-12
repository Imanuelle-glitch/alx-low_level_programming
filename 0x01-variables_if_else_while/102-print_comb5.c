#include <stdio.h>
/**
 * main - program starts here
 *
 * Return: always 0
 */
int main(void)
{
	int t1, u1, t2, u2;

	for (t1 = 0; t1 <= 9; t1++)
	{
		for (u1 = 0; u1 <= 9; u1++)
		{
			for (t2 = t1; t2 <= 9; t2++)
			{
				for (u2 = u1 + 1; u2 <= 9; u2++)
				{
					putchar(t1 + '0');
					putchar(u1 + '0');
					putchar(' ');
					putchar(t2 + '0');
					putchar(u2 + '0');

					if (!(t1 == 9 && u1 == 8 && t2 == 9 && u2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
