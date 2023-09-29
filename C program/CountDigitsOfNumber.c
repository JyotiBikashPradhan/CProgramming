/*
	WAP to count number of digits in a number
	Enter a number to count digits:
	5489655986
	no of digits :
	10

*/
#include<stdio.h>
int main(){
	int n,count=0;
	printf("Enter a number to count digits:\n");
	scanf("%d",&n);
	while(n>0){
		n=n/10;
		count++;
	}
	printf("no of digits :\n");
	printf("%d", count);
	return 0;
}
