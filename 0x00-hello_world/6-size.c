#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	long int x;
	long long int y;
	int z;
	char m;
	float n;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));
	return (0);
}
