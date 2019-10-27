#include<stdio.h>

void arrInput(int *pAarr, int num);
void arrPrint(const int *pAarr, int num);

int main(void)
{
	int arr[10];
	
	arrInput(arr,10);
	
	arrPrint(arr,10);
	
	return 0;
}

void arrInput(int *pAarr, int num)
{
	printf("10개의 배열 원소를 입력하시오!!!\n");
	 
	for(int i=0; i<10; i++)
	{
		printf("arr[%d]: ",i);
		scanf("%d",&pAarr[i]);
	}
}

void arrPrint(const int *pAarr, int num)
{
	printf("arrIndex Value Histogram\n");
	
	for(int i=0;i<10;i++)
	{
		printf("%4d%9d  ",i,pAarr[i]);
		int star = pAarr[i];
		
		for(int j=0; j<star;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
