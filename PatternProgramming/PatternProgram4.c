/*
  
  enter a number: 5
  
  5 5 5 5 5 5 5 5 5
  5 4 4 4 4 4 4 4 5
  5 4 3 3 3 3 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 2 1 2 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 3 3 3 3 4 5
  5 4 4 4 4 4 4 4 5
  5 5 5 5 5 5 5 5 5


*/

#include<stdio.h>
#include<math.h>
int main(){
	int r,c,n ;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(r=-(n-1);r<n;r++)
	{
		for(c=-(n-1);c<n;c++)
		{
			if(abs(r)>abs(c)){
				 printf("%d ",abs(r)+1);
			}
			else
			{
				printf("%d ",abs(c)+1);
			}
	       
        }
        printf("\n");
	}
	
	
	return 0;
}

