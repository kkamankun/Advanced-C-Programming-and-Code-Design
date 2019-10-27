#include<stdio.h>

int main(void)
{
	int num;
	int i,j,k=0;
	
	printf("*********	메	뉴	*********\n");
	printf("1.알파벳 박스 모양 출력\n2.알파벳 피라미드 모양 출력\n3.프로그램 종료\n");
	printf("******************************\n");
	printf("메뉴 선택 : ");
	
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
		for(int i=0;i<26;i++)
		{
			for(int j=65+i;j<=90;j++)
			{
				printf("%c ",j);
			}
			for(int k=65;k<65+i;k++)
			{
				printf("%c ",k);
			}
			printf("\n");
		}
		break;
		
		case 2:
		for(i=0;i<26;i++)
		{
			{for(j=40-i;j>0;j--)
				printf(" ");
			for(j=0;j<=i;j++)
				printf("%2c",65+j);
			printf("\n");	
		}
	}
		
		break;
			
		case 3:
			printf("프로그램 종료");
	}
	
	return 0;
}

