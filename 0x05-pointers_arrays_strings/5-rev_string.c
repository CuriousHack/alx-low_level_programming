#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string tobe reversed
 * Return: nothing toreturn
 */
void rev_string(char *s)
{
	int count = 0, i;
	char temp, *str;

	while (s[count] != '\0')
	{
		count++;
	}
	str = s;
	for (i = -1; i <= count / 2; i++)
	{
		temp = str[i];
		str[i] = str[count - i - 1];
		str[count - i - 1] = temp;
	}
}
