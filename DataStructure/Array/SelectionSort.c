#include <stdio.h>

void selection(int arr[], int n)
{
    int i, j, small;

    for (i = 0; i < n - 1; i++)
    {
        small = i;

        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[small])
                small = j;

        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n, i;
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
    selection(arr, n);
    printf("\nsorted array is ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}