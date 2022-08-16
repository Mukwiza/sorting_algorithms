#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 * @array: array to be sorted
 * @size: size of elements in @array
 * Return: Always 0
 */ 

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL)
		return;
	for (i = 1; i < size; i++)
	{
		for(j = 0; j < size -1; j++)
		{	
			size_t temp = 0;
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				print_array(array, size);
			}
		}
	}
}
