#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argv: The character to print
 * @argc: The character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}