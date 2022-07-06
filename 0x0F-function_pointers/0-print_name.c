#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name- prints a name
 *@name: name to print.
 *@f: this a function pointer
* Return: this is a void function no return
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
