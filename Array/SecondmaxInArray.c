#include<stdio.h>

int main()
{
	
	int n,i,largest1=0,largest2=0,temp;
	printf("enter size of an array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("enter elements of an array: ");
	for(i=0; i<=n;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("array is : ");
	for(i=0; i<=n;i++){
		printf("%d ", arr[i]);
	}
	largest1 = arr[0];
    largest2 = arr[1];
    
    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
     for (i = 2; i < n; i++)
    {
        if (arr[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if (arr[i] > largest2 && arr[i] != largest1)
        
            largest2 = arr[i];
        }
    
    
   
     printf("2nd largest of an array : %d", largest2);	
	
 	
	
	
	return 0;
}



 	
    
 

