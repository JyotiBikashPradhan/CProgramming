/*
	WAP to find sum of all even numbers between 1 to n.
	
	enter n to get sum of even number:
	100
	sum of even numbes are :
	2550

*/

#include<stdio.h>
int main(){
     int n, i, sum=0;
     printf("enter n to get sum of even number:\n");
     scanf("%d", &n);
     printf(" sum of even numbes are :\n");
     for(i=0;i<=n;i++){
         if(i%2==0){
             sum=sum+i;
         }
             }
             printf("%d\n", sum );
     return 0;
     }

