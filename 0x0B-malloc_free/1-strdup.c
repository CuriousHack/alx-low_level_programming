#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function toreturn address of duplicated string
 * @str: string to be duplicated
 * Return: NULL if failed, new address if success
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len = strlen(str) + 1;

	new_str = malloc(len);

	if (new_str == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	memcpy(new_str, str, len);
	return (new_str);
}
