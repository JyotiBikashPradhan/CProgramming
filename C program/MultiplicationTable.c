/*
	WAP to print multiplication table of any number
	
	enter n to get get multipliation table:
	10
	10 x 1 =10
	10 x 2 =20
	10 x 3 =30
	10 x 4 =40
	10 x 5 =50
	10 x 6 =60
	10 x 7 =70
	10 x 8 =80
	10 x 9 =90
	10 x 10 =100

*/

#include<stdio.h>
int main(){
     int n, i;
     printf("enter n to get get multipliation table:\n");
     scanf("%d", &n);
    //  printf(" multiplication table is :\n");
     for(i=1;i<=10;i++){
       printf("%d x %d =%d\n", n,i,n*i);
         }
             
            
     return 0;
     }

