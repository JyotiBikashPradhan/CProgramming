/*
  write a program to calculate LCM of two number
  
  enter two number: 45
  15
  GCD of 45 and 15 is 15
  LCM of 45 and 15 is 45
  
  
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
	int a,b,lcm;
	printf("enter two number: ");
	scanf("%d %d",&a,&b);
	
	int gcd=calculateGCD(a,b);
	
	lcm=a*b/gcd;
	
	printf("GCD of %d and %d is %d\n",a,b,gcd );
	printf("LCM of %d and %d is %d",a,b,lcm );
	return 0;
	
}
	
	
	

