/*
	WAP to calculate sum of digits of a number
	enter a number :4597
	sum of digits of a number :25
	

*/

#include<stdio.h>>

int main(){
	int n, sum=0, rem;
	printf("enter a number :");
	scanf("%d", &n);
	while(n>0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	
	printf("sum of digits of a number :%d", sum);
	return 0;
}
