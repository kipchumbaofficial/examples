#include <stdio.h>
/**
 * swap - Swaps elements of an array
 * @xp: X pointer
 * @yp: Y pointer
 *
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}

/**
 * selectionSort - Selection sort algorithm
 * @arr: Array to be sorted
 * @n: Size of the array
 *
 */
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}

/**
 * printArray - Prints Array
 * @arr: Array to be printed
 * @size: Size of the array
 */

void printArray(int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d, ", arr[i]);
	printf("\n");
}
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);
	printf("sorted array: \n");
	printArray(arr, n);
	return (0);
}

