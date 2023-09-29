/*
	WAP to print all odd number between 1 to 100
	
	enter number to get odd numbers:
 	100
	All the even numbers are:
	1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99
	
*/

#include <stdio.h>

int main() {
   int n, i;
  printf("enter number to get odd numbers:\n ");
  scanf("%d", &n);
  printf("All the even numbers are:\n");
 for(i=1;i<=n;i++){
     if(i%2!=0){
         printf("%d ",i);
     }
 }
}
