#include<stdio.h>

int main(void)
{
	int leapyear, cyear; // cyear(=commonyear)
	
	printf("년도 입력 : ");
	scanf("%d",&cyear);
	
	if(cyear%4==0)
	{
		if(cyear%100==0)
		{
			if(cyear%400==0)
			{
				leapyear=cyear;
				printf("%d는 윤년입니다.",leapyear); 
			}
			else
			printf("%d는 평년입니다.",cyear); 
		}
		else
		printf("%d는 평년입니다.",cyear); 
	}
	else
	printf("%d는 평년입니다.",cyear); 
	return 0;	
}

