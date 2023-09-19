#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string that is reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int len, left, right;
	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	right = len - 1;

	for (left = 0; right >= 0 && left < right; left++, right--)
	{
	temp = s[left];
	s[left] = s[right];
	s[right] = temp;
	}
}
