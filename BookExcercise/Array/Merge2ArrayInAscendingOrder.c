#include <stdio.h>


int main()
{
   
    int n, i;

    printf("How many nos of element you want to insert in both the array : \n");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("\nEnter elemet for first array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter elemet for second array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int arr[2 * n];
    for (i = 0; i < 2 * n; i++)
    {
        if (i < n)
            arr[i] = arr1[i];
        else
            arr[i] = arr2[i-n];
    }

    int temp, j;
    for (i = 0; i < 2 * n; i++)
    {
        for (j = i + 1; j < 2 * n; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nAfter merging 2 arrays and sordted in ascending order : \n");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 1;
}
