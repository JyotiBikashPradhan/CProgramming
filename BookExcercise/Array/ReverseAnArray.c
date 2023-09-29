#include <stdio.h>

int main()
{
   
    int n, i, j, count = 0;

    printf("How many nos you want to enter : \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : \n", n);
    for (i = 0; i < n; i++) {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before reversing the array : \n");
    for (i = 0; i < n; i++){
        printf("%d, ",arr[i]);
    }

    for (i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[(n-1)-i];
        arr[(n-1)-i] = temp;
    }

    printf("\nAfter reversing the array : \n");
    for (i = 0; i < n; i++){
        printf("%d, ",arr[i]);
    }
    return 1;
}
