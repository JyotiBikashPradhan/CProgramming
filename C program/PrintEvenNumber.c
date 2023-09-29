/*
	WAP to print all even numbers between 1 to 100.
	enter number to get even numbers:
 	100
	All the even numbers are:
	2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100

*/

#include <stdio.h>

int main() {
   int n, i;
  printf("enter number to get even numbers:\n ");
  scanf("%d", &n);
  printf("All the even numbers are:\n");
 for(i=1;i<=n;i++){
     if(i%2==0){
         printf("%d ",i);
     }
 }
}
