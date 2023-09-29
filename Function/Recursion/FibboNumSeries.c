/*
  print nth fibonacci number using recursion
  
  Enter a number to get fibonacci term: 10
  10th fibo number is 55
  Fibonacci series upto 10 term is 0 1 1 2 3 5 8 13 21 34 55
  
  
*/

#include<stdio.h>

int fibboNum(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fibboNum(n-1)+fibboNum(n-2);
	}
	
}

int main(){
	int n,i;
	printf ("Enter a number to get fibonacci term: ");
	scanf("%d", &n);
	
	int fn=fibboNum(n);
	
	
	printf("%dth fibo number is %d\n",n,fn);
	
	printf("F1ibonacci series upto %d term is ",n);
	for(i=0;i<=n;i++){
		printf("%d ", fibboNum(i) );
	}
	
	
	
	return 0;
}
