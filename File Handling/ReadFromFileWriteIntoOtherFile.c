#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	FILE* ptr1;
	FILE* ptr2;


	ptr1 = fopen("skill.txt", "r");
	ptr2 = fopen("centre.txt", "w");
	
	int ch;
	while((ch=fgetc(ptr1))!=EOF){
		
		if(ch>96){
		ch=ch-32;
		
	}
		
		putc(ch,ptr2);
		printf("%c",ch);
	}

	

	if (ptr1 == NULL) {
		printf("The file is not opened. The program will "
			"now exit.");
		exit(0);
		}
		
		fclose(ptr1);
		fclose(ptr2);
		
		return 0;
}

