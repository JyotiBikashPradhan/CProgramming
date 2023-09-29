/*
	WAP to find sum of all odd numbers between 1 to n
	
	enter n to get sum of odd number:
	100
 	sum of odd numbes are :
	2500

*/

#include<stdio.h>
int main(){
     int n, i, sum=0;
     printf("enter n to get sum of odd number:\n");
     scanf("%d", &n);
     printf(" sum of odd numbes are :\n");
     for(i=1;i<=n;i++){
         if(i%2!=0){
             sum=sum+i;
         }
             }
             printf("%d\n", sum );
     return 0;
     }

