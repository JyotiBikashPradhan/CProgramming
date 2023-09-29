#include<stdio.h>
#include<stdlib.h>
 
struct stud{
	int roll;
	char fname[30];
	char lname[30];
};





 void main( )  
{  
FILE *fp ;  
 
struct stud std={10, "sdc", "centre"};
fp = fopen("rkpanda.txt","w") ;  
if(fp==NULL){
	printf("error while opening a file");
	exit(1);
}
int flag=0;
flag=fwrite(&std,sizeof(struct stud),1,fp);
if(flag){
	printf("instance of structure reading successfully");
}
else{
	printf("error");
}
fclose(fp);
}

