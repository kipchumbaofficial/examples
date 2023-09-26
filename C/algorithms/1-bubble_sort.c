#include <stdio.h>
#include <stdbool.h>
/**
 * swap - Swaps two elements
 * xp: first elemet
 * yp: other element
 *
 */
void printArray(int arr[], int size);

void swap(int *xp, int *yp)
{
    int temp = *xp;

    *xp = *yp;
    *yp = temp;
}
/**
 * bubbleSort - Sorsta using bubble sort algorithm
 * arr: Array
 * n: Number of elements in the array
 *
 */
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
                printArray(arr, n);
            }
            if (swapped == false)
                break;
        }
    }
}
/**
 * printArray - Prints an array
 * arr: Array to be printed
 * size: Size of array
 */
void printArray(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
    int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printf("Sorted Array: \n");
    printArray(arr, n);
    return (0);
}
