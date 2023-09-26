#include <stdio.h>
#include <stdlib.h>
/**
 * swap - Swaps elements
 * @xp: Address of 1st int
 * @yp: Address of 2nd int
 */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
/**
 * selectionSort - Sorts an array of integers
 * @int arr[]: Array to be sorted
 * @n: Number of elements in the array
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
 * printArray - Prints an array
 * arr: Array
 * size: Size of the array
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
    printf("Sorted arry: \n");
    printArray(arr, n);
    return (0);
}
