#include <stdio.h>
#include <stdlib.h>
/**
* main - program multiplies two numbers and prints it.
* @argc: counter
* @argv: pointer array of strings
* Return: 0 or 1
**/
int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;
	printf("%d\n", product);
	return (0);
}
