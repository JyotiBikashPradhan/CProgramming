#include <stdio.h>

int binarySearch(int a[], int key, int n)
{
    int mid, start = 0, end = n - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int key, n, i;
    printf("enter size of an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the key you want to search in an array :");
    scanf("%d", &key);

    int flag = binarySearch(arr, key, n);
    if (flag >= 0)
    {
        printf("%d is found at %d  ", key, flag);
    }
    else
    {
        printf("%d is not found in array", key);
    }

    return 0;
}