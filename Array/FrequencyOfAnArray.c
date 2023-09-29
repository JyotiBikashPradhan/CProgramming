/*
  Count frequency of each element of an array

*/

#include <stdio.h>

void main()
{
    int arr[100], trr[100];
    int n, i, j, c;

       printf("the number of elements of array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
	   {
	        scanf("%d",&arr[i]);
	  		trr[i] = -1;
       	
	   }
    for(i=0; i<n; i++)
    {
    	 c = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                trr[j] = 0;
            }
        }

        if(trr[i]!=0)
        {
            trr[i] = c;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(trr[i]!=0)
        {
            printf("%d = %d times\n", arr[i], trr[i]);
        }
    }
}

