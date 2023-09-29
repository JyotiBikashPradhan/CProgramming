#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char ch;
	int i;
	fp = fopen("skill1.txt", "w");
	for (i = 0; i < 20; i++)
	{
		ch = getchar();
		if (ch > 96)
		{
			ch = ch - 32;
		}
		putc(ch, fp);
	}
	fclose(fp);
}
