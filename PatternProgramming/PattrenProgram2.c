/*

1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/


#include<stdio.h>
#include<math.h>
int main(){
	int r,c ;
	for(r=-5;r<=5;r++)
	{
		for(c=1;c<=abs(r);c++)
		{
	        printf("%d ",c);
        }
        printf("\n");
	}
	
	
	return 0;
}

 
