/*
	WAP to print patern using n

	enter a number to print a pattern: 10
	1 
	2 3 
	4 5 6 
	7 8 9 10 
	11 12 13 14 15 
	16 17 18 19 20 21 
	22 23 24 25 26 27 28 
	29 30 31 32 33 34 35 36 
	37 38 39 40 41 42 43 44 45 
	46 47 48 49 50 51 52 53 54 55 

*/


#include<stdio.h>

int pattern(int n){
	int r,c ,p=1;
	
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			printf("%d ",p);
			p++;
		}
		printf("\n");
	}
}

int main(){
	int n;
	printf("enter a number to print a pattern: ");
	scanf("%d", &n);
	int r=pattern(n);
	
	
	return 0;
}
