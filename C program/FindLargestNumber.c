/*
	WAP to find greatest among n numbers.
	How many numbers do you want to enter: 5
	Enter your numbers:
	10
	50
	80
	2
	14
	The largest number is: 80

	
*/

#include <stdio.h>

int main() {
    int n, i, max,min;
    printf("How many numbers do you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your numbers:\n");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    min=max=arr[0];
    for(i=1; i<n; i++)
    {
         if(min>arr[i])
		  min=arr[i];   
		   if(max<arr[i])
		    max=arr[i];       
    }
    
    printf("max and min number in an array: %d & %d\n", max,min);
    return 0;
}

