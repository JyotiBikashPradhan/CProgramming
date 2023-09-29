/*
	WAP to calculate factorial of a number.
	
	enter a number: 5
	factorial of 5 is  120

*/

#include<stdio.h>

int main(){
	int n, fact=1,i;
	printf("enter a number: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	
	printf("factorial of %d is  %d", n,fact);
	return 0;
}
