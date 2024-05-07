#include <stdio.h>
/**
 * linearSearch - Iterarive linear search algorithm
 * @size: Size of the array
 * @x: Element to search for
 *
 * Return: Always index or -1
 */
int linearSearch(int arr[], int size, int x)
{
	for (int i = 0; i < size; i++)
		if (arr[i] == x)
			return (i);
	return (-1);
}
/**
 * main - Driver code
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {10, 50, 30, 70, 80, 20, 90, 40};
	int size = sizeof(arr) / sizeof(arr[0]);

	int result = linearSearch(arr, size, 20);
	if (result == -1)
		printf("Element Not found\n");
	else
		printf("Element at index %d\n", result);
}
