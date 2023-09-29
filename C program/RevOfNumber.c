/*
	WAP to enter a number and print its reverse.
	enter a number :1234
	product of digits of a number :4321
	
	
*/


#include<stdio.h>>

int main(){
	int n, rev=0, rem;
	printf("enter a number :");
	scanf("%d", &n);
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	
	printf("product of digits of a number :%d", rev);
	return 0;
}
