#include <stdio.h>


int main()
{

    int n, i;

    printf("How many nos you want to enter : \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers : \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (arr[left] > 0 && arr[right] < 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        else if (arr[left] < 0 && arr[right] < 0)
        {
            left++;
        }
        else if (arr[left] > 0 && arr[right] > 0)
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    }

    printf("\nAfter moving all -ve nos to left side of array : \n");
    for (i = 0; i < n; i++)
    {
       printf("%d, ", arr[i]);
    }

    return 1;
}
