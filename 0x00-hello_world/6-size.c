#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: c program to print the size of datatypes
 * using function sizeof();
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char charSize;
	int intSize;
	float floatSize;
	long longSize;
	long long llSize;

	printf("Size of a char: %zu byte(s)\n", sizeof(charSize));
	printf("Size of an int: %zu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(longSize));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(llSize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));

	return (0);
}
