/*
	WAP to calculate product of digits of a number.
	enter a number :1234
	product of digits of a number :24
	
*/



#include<stdio.h>>

int main(){
	int n, product=1, rem;
	printf("enter a number :");
	scanf("%d", &n);
	while(n>0){
		rem=n%10;
		product=product*rem;
		n=n/10;
	}
	
	printf("product of digits of a number :%d", product);
	return 0;
}
