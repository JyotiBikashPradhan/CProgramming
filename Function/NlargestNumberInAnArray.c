/*
    write a program to find nth largest number after sorting in an array in c

    Enter the size of the array: 5
    Enter 5 elements of the array:
    10
    20
    30
    40
    50
    Enter the value of n: 3
    The 3th largest number is: 30

*/

#include <stdio.h>


void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findNthLargest(int arr[], int size, int n)
{

    if (n <= 0 || n > size)
    {
        printf("Invalid value of n\n");
        return -1;
    }

    bubbleSort(arr, size);

    return arr[size - n];
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
   
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nthLargest = findNthLargest(arr, size, n);

    if (nthLargest != -1)
    {
        printf("The %dth largest number is: %d\n", n, nthLargest);
    }

  

    return 0;
}
