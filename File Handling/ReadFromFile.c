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
 
struct stud std;
fp = fopen("rkpanda.txt","r") ;  
if(fp==NULL){
	printf("error while opening a file");
	exit(1);
}
int flag=0;
flag=fread(&std,sizeof(struct stud),1,fp);
if(flag){
	printf("data read from file successfully");
	printf("\nid:%d",std.roll);
	printf("\nfname:%s",std.fname);
	printf("\nlname:%s",std.lname);
	
	
}
else{
	printf("error");
}
fclose(fp);
}

