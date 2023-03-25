#include "function_pointers.h"

/**
 * int_index - function to callback function pointer
 * @array: array to performoperation on
 * @size:size of the array
 * @cmp: function pointer to perfrom operation
 * Return: index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(i))
				return (i);
		}
		return (-1);
	}
}
