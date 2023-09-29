/*
	WAP to check whether a number is prime or not.

	enter a number to check prime or not: 10
	10 is not a  prime number

*/

#include<stdio.h>

int main(){
	int n,i,flag=0;
	printf("enter a number to check prime or not: ");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
		
	}
	if(flag==0 || n==2){
		printf("%d is prime number",n);
	}
	else{
		printf("%d is not a  prime number",n);
	}
}
