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
