#include <stdio.h>

void merge(int a[], int mid, int l, int r)
{
    int temp[50];
    int i, j, k;
    i = l;
    j = mid + 1;
    k = 0 ;
    
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for(i=l,j=0;i<=r;i++,j++){
        a[i]=temp[j];
    }
}

void mergeSort(int a[],int l,int r){
    int mid;
    if(l<r){
        mid=(l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,mid,l,r);
    }
}


int main()
{
    int n, i,l=0;
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
    mergeSort(arr, l, n-1);
    printf("\nsorted array is ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
