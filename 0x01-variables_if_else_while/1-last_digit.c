#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
#include <stdio.h>
/**
 * main - always main
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = abs(n) % 10;

	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	printf("%d and is greater than 5", lastDigit);
	else if (lastDigit == 0)
	printf("%d and is 0", lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
	printf("%d and is less than 6 and not 0", lastDigit);
	printf("\n");
	return (0);
}
