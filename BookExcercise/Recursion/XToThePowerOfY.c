/*
  Find x to the powery using recursion.
  
  enter base and exponenet : 2
  4
  2 to the power 4 is 16

*/


#include<stdio.h>

int xToThePowerOfY(int x, int y){
	
	if(y==0){
		return 1;
	}
	else{
		return x*xToThePowerOfY(x,y-1);
	}
}

int main(){
	int a,b;
	printf("enter base and exponenet : ");
	scanf("%d%d", &a,&b);
	
	int res=xToThePowerOfY(a,b);
	
	printf("%d to the power %d is %d", a,b,res);
	return 0;
}
