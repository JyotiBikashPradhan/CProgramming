/*
	WAP to print n natural numbers in reverse.
	
	output:- 
	enter n to print natural number:
	10
 	natural numbes are :
	1 2 3 4 5 6 7 8 9 10  
	natural numbes in reverse order are :
	10 9 8 7 6 5 4 3 2 1

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
    printf(" natural numbes in reverse order are :\n");
    for(i=n;i>=1;i--){
        printf("%d ", i );
    }
     return 0;
     }
