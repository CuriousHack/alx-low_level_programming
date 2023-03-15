#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function toconvert arguments to string
 * @ac: number of argument
 * @av: array of args
 * Return: 0 Always true
 */
char *argstostr(int ac, char **av)
{
	int i, j, m, counter;
	char *arr;

	if (ac == 0)
		return (NULL);

	for (counter = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
		counter++;
	}

	arr = malloc((counter + 1) * sizeof(char));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = j = m = 0; i < counter; j++, i++)
	{
		if (av[i][j] == '\0')
		{
			arr[m] = '\n';
			i++;
			m++;
			j = 0;
		}
		if (i < counter - 1)
			arr[m] = av[i][j];
	}
	arr[m] = '\0';

	return (arr);
}
