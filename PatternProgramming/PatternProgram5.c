/*

X       X
 X     X
  X   X
   X X
    X
   X X
  X   X
 X     X 
X       X


*/

#include<stdio.h>
#include<math.h>
int main(){
	int r,c,n ;
	printf("enter a number: ");
	scanf("%d",&n);
	
	for(r=-n;r<=n;r++)
	{
		for(c=-n;c<=n;c++)
		{
			if(abs(r)==abs(c)){
				 printf("*");
			}
			else
			{
				printf(" ");
			}
	       
        }
        printf("\n");
	}
	
	
	return 0;
}

