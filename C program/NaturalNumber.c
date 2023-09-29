/*
	WAP to print all natural numbers from 1 to n.
	
	output:-
	
	 natural numbes are :
		1 2 3 4 5 6 7 8 9 10
	

*/


#include<stdio.h>
int main(){
     int n, i;
     printf("enter n to print natural number:\n");
     scanf("%d", &n);
     printf(" natural numbes are :\n");
     for(i=1;i<=n;i++){
             printf("%d ", i );
             }
     return 0;
     }
