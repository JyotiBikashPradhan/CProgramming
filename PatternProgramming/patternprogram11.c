\

#include<stdio.h>
#include<math.h>

int main(){
	int r,c,n=5;
	for(r=-n;r<=n;r++)
	{
		for(c=1;c<=n-abs(r)+1;c++)
		{
	        printf("%d ",c);
        }
        printf("\n");
	}
	
	
	return 0;
}

 
