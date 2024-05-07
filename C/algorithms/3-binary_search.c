#include <stdio.h>
/**
 * binarySearch - Iterative binary Search Algorithm
 * @arr: Array to search
 * @x: Target to search for
 *
 * Return: -1 or the index of the target
 */
int binarySearch(int arr[], int size, int x)
{
	int low = 0;

	if (size != 0)
	{
		int high = size - 1;

		while (low <= high)
		{
			int mid = low + (high - low) / 2;
			if (arr[mid] == x)
				return mid;
			else if (arr[mid] < x)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return (-1);
}
/**
 * main - Driver code
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {1, 2, 4, 7, 9, 11, 13, 15, 16, 17};
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, size, 15);

	if (result == -1)
		printf("Element Not Found\n");
	else
		printf("Element found at index %d\n", result);
	return (0);
}
