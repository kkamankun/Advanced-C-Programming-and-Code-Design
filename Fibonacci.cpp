#include<stdio.h>
int Fibo(int);

int main(void)
{
	int input, result;
	
	printf("### 피보나치 수열 ###\n\n");
	printf("몇 번째 수열까지 출력할까요 : ");
	
	scanf("%d", &input);
	
	for(int i=1; i<=input; i++)
	{
		result = Fibo(i);
		printf("%10d", result);
		if(i%5==0)
		{
			printf("\n");
		}
	}
	return 0;
}

int Fibo(int n)
{
	int Fibo_Table[50];

	if(n==1 || n==2)
		return 1;
		
	Fibo_Table[1]=1;
	Fibo_Table[2]=1;
	
	for(int i=3; i<=n; i++)
	{
		Fibo_Table[i]=Fibo_Table[i-1]+Fibo_Table[i-2];
	}
	
	return Fibo_Table[n];
	
}
