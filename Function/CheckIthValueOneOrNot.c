/*
  Check ith valuse is one or not
  enter a number :10
  enter index :2
  yes
  
*/

#include<stdio.h>
#include<math.h>


int checkIthValueOneOrNot(int n, int i)
{
 	if(n&(n<<i)){
 		return 1;
	 }
	 else{
	 	return 0;
	 }
	
	

}

int main (){
	int n, i;
	
	printf("enter a number :");
	scanf("%d", &n);
	printf("enter index :");
	scanf("%d", &i);
	
	int flag=checkIthValueOneOrNot(n,i);
	
	if(flag==1){
		printf("yes");
	}
	else
	{
		printf("No");
	}
	
	return 1;
	
}
