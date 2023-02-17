#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program to test for last di
 * git in a number and process it for decision
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	char s[] = "Last digit of %d is %d and is";

	if (m > 5)
		printf("%s greater than 5\n", n, m);
	else if (m == 0)
		printf("%s 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("%s less than 6 and not 0\n", n, m);
	return (0);
}
