#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string tobe reversed
 * Return: nothing toreturn
 */
void rev_string(char *s)
{
	int count;
	int n = 0;
	int m = 0;
	char b[n];

	while (s[n] != '\0')
	{
		n++;
	}
	for (count = n - 1; count >= 0; count--)
	{
		b[m] = s[n];
		m++;
	}
	*s = b[m];
}
