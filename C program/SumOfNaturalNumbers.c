/*
	WAP to find sum of all natural numbers between 1 to n.
	
	enter n to get sum of natural number:
	100
		 sum of natural numbes are :
	5050


*/

#include<stdio.h>
int main(){
     int n, i, sum=0;
     printf("enter n to get sum of natural number:\n");
     scanf("%d", &n);
     printf(" sum of natural numbes are :\n");
     for(i=0;i<=n;i++){
         sum=sum+i;
             }
             printf("%d\n", sum );
     return 0;
     }

