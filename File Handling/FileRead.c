
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	FILE* fptr;

	fptr = fopen("skill.txt", "r");
	
	

	if (fptr == NULL) {
		printf("The file is not opened. The program will "
			"now exit.");
		exit(0);
	}
	while((a=fgetc(fptr))!=EOF){
		printf("%c",a);
	}

	return 0;
}

