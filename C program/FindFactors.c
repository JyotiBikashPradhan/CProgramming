/*
	WAP to find prime factors of a number.
	
	enter a number: 60
	all factors of 60 :1 2 3 4 5 6 10 12 15 20 30 60
*/

#include<stdio.h>

int main(){
	
	int n, i;
	printf("enter a number: ");
	scanf("%d", &n);
	
	printf("all factors of %d :", n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ", i);
		}
		
	}
	return 0;
}

