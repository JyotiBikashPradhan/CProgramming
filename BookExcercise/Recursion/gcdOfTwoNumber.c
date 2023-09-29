/*
  	Find the GCD of two numbers using recursion
  	
  	Enter 2 numbers to get gcd :3
	7
	GCD of 3 & 7 is: 1
  	
  	
*/
#include<stdio.h>

int gcdOfTwoNumber(int a, int b){
	if (b!=0){
		return gcdOfTwoNumber(b,a%b);
	}
	else{
		return a;
	}
	
}

int main(){
int x, y;
		printf("Enter 2 numbers to get gcd :");
		scanf("%d %d", &x,&y);
		
		int gcd=  gcdOfTwoNumber(x,y);
		
		printf("GCD of %d & %d is: %d ",x, y, gcd);
		
		return 0;
}
