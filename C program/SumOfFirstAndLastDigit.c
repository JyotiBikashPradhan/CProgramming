/*
	WAP to find sum of first and last digit of a number.
	
	enter a number:
	459
	sum of first digit and last digit is :13

*/

#include<stdio.h>

int main(){
	int n ,firstDigit,lastDigit, sum=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	
	lastDigit = n % 10;
	
	while(n>=10){
		n=n/10;
		
	}
	firstDigit= n;

	sum= firstDigit + lastDigit;
	printf("sum of first digit and last digit is :%d ",sum);
	return 0;
}
