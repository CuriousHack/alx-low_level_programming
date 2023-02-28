#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string tobe reversed
 * Return: nothing toreturn
 */
void rev_string(char *s)
{
	int count, i;
	char temp;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i <= count / 2; i++)
	{
		temp = *s[i];
		*s[i] = *s[count - i - 1];
		*s[count - i - 1] = temp;
	}
}
