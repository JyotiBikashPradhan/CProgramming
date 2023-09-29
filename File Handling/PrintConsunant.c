#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,count=0;
	FILE* ptr1;
	FILE* ptr2;

	ptr1 = fopen("skill.txt", "r");
	ptr2 = fopen("centre.txt", "w");
	
	

	if (ptr1 == NULL) {
		printf("The file is not opened. The program will "
			"now exit.");
		exit(0);
	}
	while((a=fgetc(ptr1))!=EOF){
		
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u' ){
			continue;
		}
		else{
				putc(a,ptr2);
				printf("%c",a);
		}
	}
	
	

	return 0;
}

