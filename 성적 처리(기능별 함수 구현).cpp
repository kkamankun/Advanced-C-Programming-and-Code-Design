#include<stdio.h>

double stuSum(double *,int);
double stuAve(double *,int);
double stuMax(double *,int);

int main(void)
{
	double arr[10];
	double sum, ave, max;
	
	printf("10명의 학생 점수를 입력하시오\n\n");
	for(int i=0; i<10; i++)
	{
		printf("arr[%d]: ",i);
		scanf("%lf", &arr[i]);
	}
	
	sum=stuSum(arr,sizeof(arr)/sizeof(double));
	ave=stuAve(arr,sizeof(arr)/sizeof(double));
	max=stuMax(arr,sizeof(arr)/sizeof(double));
		
	printf("\n총점:%.2f, 평균:%.2f, 최대값:%.2f\n",sum,ave,max);
	return 0;
}
double stuSum(double *pArr,int num)
{
	double aSum;
	for(int i=0;i<10;i++)
	{
		aSum+=*(pArr+i);
	}
	return aSum;
}

double stuAve(double *pArr,int num)
{
	double aSum=0;
	for(int i=0;i<10;i++)
	{
		aSum+=*(pArr+i);
	}
	double aAve=aSum/10;
	return aAve;
}

double stuMax(double *pArr,int num)
{
	double aMax;
	aMax=pArr[0];
	for(int i=0;i<10;i++)
	{
		if(aMax<pArr[i])
		{
			aMax=pArr[i];
		}
	}
	return aMax;
}

