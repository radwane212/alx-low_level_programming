#include "search_algos.h"

/**
 * binary_search - searches value using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 * or -1 else
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;
	int i = 0;

	if (array == NULL)
		return (-1);

	do {

		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", *(array + i));
		printf("%d\n", *(array + high));

		mid = (low + high) / 2;
		if (*(array + mid) == value)
			return (mid);
		else if (*(array + mid) > value)
			high = mid - 1;
		else
			low = mid + 1;

	} while (low <= high);

	return (-1);
}
