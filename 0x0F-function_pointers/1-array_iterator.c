#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator -  a function that executes a function given as
 *a parameter on each element of an array.
 *@array: A pointer to the array
 *@size: Size of the array
 *@action: the function to iterate through the  array
 *
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
