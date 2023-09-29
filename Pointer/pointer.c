#include<stdio.h>

int main(){
	int k=3;
	int *p=&k;
	
	printf("%d\n", *p);//it prints 3
	printf("%d\n", p); //it prints address 6487572
	printf("%d\n", &k);//it prints address 6487572
	printf("%d\n", k); //it prints 3
	
	return 1;
}
