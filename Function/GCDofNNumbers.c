/*
	26. WAP to find GCD of n numbers.
	
	how many numbers you want to enter :5
	enter numbers to get GCD: 5
	10
	15
	20
	25
	30
	Gcd of 5 numbers is 5


*/


#include<stdio.h>

int calculateGCD(int a, int b){
	
	int temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	
	return a;
	
}

int calculateGCDArray(int a[], int n){
	
	int i;
	int result=a[0];
	for (i=1;i<=n;i++){
		result=calculateGCD(result,a[i]);
	}
	
	return result;
}

int main(){
	int n,i;
	printf("how many numbers you want to enter :");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter numbers to get GCD: ");
	for(i=0;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	int res=calculateGCDArray(arr , n);
	
	printf("Gcd of %d numbers is %d",n, res);
	
	
	
}
