#include <stdio.h>
/**
 * main - program starts here
 *
 * Return: always 0
 */
int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		printf("%d", numbers);
		numbers++;
	}

	printf("\n");
	return (0);
}
