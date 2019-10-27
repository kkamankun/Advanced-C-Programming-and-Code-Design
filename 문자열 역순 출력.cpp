#include<stdio.h>
#define Max_size 30

void revPrint(const char *pStr);

int main(void)
{
	char arr[Max_size];
	printf("문자열 입력: ");
	gets(arr);
	
	revPrint(arr);
	
	return 0;
}

void revPrint(const char *pStr)
{
	int idx=0;
	
	while(pStr[idx]!='\0')
	{
		idx++;
	}
	
	for(int j=idx-1; j>=0; j--)
		{
			printf("%c",*(pStr+j));
		}

}

