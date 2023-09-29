#include <stdio.h>

int linearSearch(int a[], int n, int key)
{
    int i, flag = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = i;
            break;
        }
    }
    return flag;
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

    printf("Enter the key you want to search in an array :");
    scanf("%d", &key);

    int flag = linearSearch(arr, n, key);
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