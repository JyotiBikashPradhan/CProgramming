/*
	25. WAP to find HCF (GCD) of two numbers.
	
	Enter 2 numbers to get gcd :3
	7
	GCD of 3 & 7 is: 1
	

*/

#include<stdio.h>
int main(){
	int a,b,i,hcf;
	printf("enter two numbers to get GCD :");
	scanf("%d %d",&a,&b);
	
	int min=(a<b)?a:b;
	
	for(i=1;i<=min;i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
	}
	
	printf("HCF of %d & %d is %d ", a,b,hcf);
	
	return 0;
}
