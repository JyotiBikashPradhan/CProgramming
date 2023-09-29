#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,count=0;
	FILE* fptr;

	fptr = fopen("skill.txt", "r");
	
	

	if (fptr == NULL) {
		printf("The file is not opened. The program will "
			"now exit.");
		exit(0);
	}
	while((a=fgetc(fptr))!=EOF){
		printf("%c",a);
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u' ){
			count++;
		}
	}
	
	printf("\nnumber of vowels is %d",count);

	return 0;
}

