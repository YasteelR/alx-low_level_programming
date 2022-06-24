#include <stdio.h>
#include <stdlib.h>
/**
* main - change calculating function
* @argc: counter
* @argv: pointer array of strings
* Return: 0 or 1
**/
int main(int argc, char *argv[])
{
	int input, output;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = atoi(argv[1]);
	output = 0;
	if (input > 25)
	{
		while (input >= 25)
			input -= 25, output++;
	}
	if (input > 10 && input < 25)
	{
		while (input >= 10)
			input -= 10, output++;
	}
	if (input > 5 && input < 10)
	{
		while (input >= 5)
			input -= 5, output++;
	}
	if (input > 2 && input < 5)
	{
		while (input >= 2)
			input -= 2, output++;
	}
	if (input == 1 || input == 2 || input == 5 ||
	    input == 10 || input == 25)
	{
		output++;
	}
	printf("%d\n", output);
	return (0);
}
