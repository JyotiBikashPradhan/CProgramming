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

    printf("Enter the sum : \n");
    int sum;
    scanf("%d",&sum);

    for(i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)", i,j);
                break;
            }
        }
    }
    
    
    return 1;
}
