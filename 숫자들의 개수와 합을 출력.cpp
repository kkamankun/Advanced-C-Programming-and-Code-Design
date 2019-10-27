#include<stdio.h>

int main(void)
{
	int input;
	int sum=0, count=0;
	
	printf("임의의 정수 입력 : ");
	scanf("%d", &input);
	printf("%d : ",input);
	
	if(input<0)
	input=-input;
	
	while(input!=0)
	{
	sum+=input%10;
	input=input/10;
	count++;
	}
	
	printf("%d 자리 정수\n",count);
	printf("각 자리의 총합 : %d",sum);
	
	return 0;
}

