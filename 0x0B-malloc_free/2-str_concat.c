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
	int i, j, m, n;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	arr = malloc((i + j + 1) * sizeof(char));

	if (arr == NULL)
		free(arr);
		return (NULL);
	for (m = 0; m <= i; m++)
	{
		arr[m] = s1[m];
	}
	n = j;
	for (j = 0; j <= n; m++; j++)
		arr[m] = s2[j];
	return (arr);
}
