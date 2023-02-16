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
	char a;
	int b;
	float c;
	long d;
	long long e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %zu byte(s)\n", sizeof(c));

	return (0);
}
