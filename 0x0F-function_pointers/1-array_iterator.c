#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - given as a parameter on each element of an array.
 *@array: the array to iterate
 *@size: the size of the array.
 *@action: this a function pointer.
* Return: this is a void function no return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
