#include<stdio.h>

void revPrint(void);

int main(void)
{
	int ch;
	printf("문자열 입력: ");
	
	revPrint();
	
	return 0;
}

void revPrint(void)
{
	int ch;
	ch=getchar();
	if(ch=='\n')
		return;
	revPrint();
	putchar(ch);
}

	
