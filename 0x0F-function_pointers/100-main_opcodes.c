#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Return: 0
*/
int main(int argc, char **argv)
{
	int i, bytes;
	char *mainaddr;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	mainaddr = (char *)main;

	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", mainaddr[i]);

	printf("%02hhx\n", mainaddr[i]);

	return (0);
}
