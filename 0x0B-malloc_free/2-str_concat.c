#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function toconcatenate two array
 * @s1: first array string
 * @s2: second array string
 * Return: return NULL if failed, address of new array if success
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, m;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	char *arr = malloc((i + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);
	if (i == 0)
		return (NULL);
	for (m = 0; m <= i; m++)
	{
		arr[m] = s1[m];
	}
	return (arr);
}
