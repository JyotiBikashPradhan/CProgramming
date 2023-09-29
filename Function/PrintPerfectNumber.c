/*
	WAP to print perfect between range 1 to N .
	
	enter a number: 28
	28 is a perfect number
	
*/


int checkPerfectNumber(int n){
        int  i, sum=0;
	
		for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
		if(sum==n){
           return 1;
		}
	
		else{
		   return 0;
		}
	}
	
	void printPerfectNumber(int range){
		int i;
		for(i=1;i<=range;i++){
			if(checkArmstrong(i)){
				printf("%d ",i);
			}
	   }
    }
    
int main(){
	
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	
	printPerfectNumber(n);
	
	return 0;
	
}
    
    

