#include<stdio.h>


int myStrLen(char str[]){
	int l=0,i;
	
	for(i=0;str[i]!='\0';i++);
	
	return i;
}
int main(){
	char str[50];
	printf("enter a string: ");
	scanf("%s",str);
//	int res =myStrLen(str);
	printf("number of characters in string is %d",myStrLen(str));
	
	return 1;
	
}

