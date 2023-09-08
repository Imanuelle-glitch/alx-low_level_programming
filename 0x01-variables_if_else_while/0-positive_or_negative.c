#include <stdlib.h>
#include <time.h>
/* more headers go there */

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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	If (n > 0)
	Printf ("%d is positive", n);
	else if (n == 0)
	Printf ("%d is zero", n);
	else if (n < 0)
	Printf ("%d is negative", n);
	Printf ("\n")
	return (0);
}
