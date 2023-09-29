#include<stdio.h>


void findFrequency( char str[]){
	int i,j,k,count=0,n;
 
    for(j=0;str[j];j++);
	 n=j; 
    

 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(str[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(str[i]==str[j])
    	    {
                 count++;
                 str[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",str[i],count);
 
	       
	   
       }
	   
	   
 	} 
	
}

int main(){
	char s[1000];
	printf("Enter  the string : ");
	scanf("%s",s);
	printf(" frequency count character in string:\n");
	findFrequency(s);
	
	return 1;
}

