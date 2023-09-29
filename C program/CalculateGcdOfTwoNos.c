/*
	25. WAP to find HCF (GCD) of two numbers.
	
	Enter 2 numbers to get gcd :3
	7
	GCD of 3 & 7 is: 1
	

*/

#include<stdio.h>


	int calculateGCD(int a, int b)
	{	
		int temp;
		while(b!=0){
			temp=b;
			b=a%b;
			a=temp;
		}
		
		return a;	
	}
	
	int main(){
		int x, y;
		printf("Enter 2 numbers to get gcd :");
		scanf("%d %d", &x,&y);
		
		int gcd=  calculateGCD(x,y);
		
		printf("GCD of %d & %d is: %d ",x, y, gcd);
		
		return 0;
	}
	
	
	
	

