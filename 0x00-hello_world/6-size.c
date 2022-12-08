#include <stdio.h>

/**
 * main - function to print the sizeof major date types
 *
 * Return: print data types and end program
 */
int main(void)
{
	char c;
	int d;
	float e;
	long f;
	long long g;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(d));
	printf("Size of a long int: %d byte(s)\n", sizeof(f));
	printf("Size of a long long int: %d byte(s)\n", sizeof(g));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}

