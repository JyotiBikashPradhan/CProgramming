  /*
  	WAP to print all alphabets from a to z.
  	
  	output:-
  	
  	All alphabates in small letter are:
	a b c d e f g h i j k l m n o p q r s t u v w x y z
  */
  
   #include<stdio.h>
   int main(){
       int ch,i;
       printf("All alphabates in small letter are:\n");
       for(i=97;i<123;i++){
           printf("%c ", i);
       }
       return 0;
       
   }
