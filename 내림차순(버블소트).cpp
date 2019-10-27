#include<stdio.h>
void DesSort(int *arr, int len);

int main(void)
{
	int ary[7];
	int num,i;
	
	for(i=0; i<7; i++){
		printf("ют╥б: ");
		scanf("%d", &ary[i]);
	}
	
	DesSort(ary, sizeof(ary)/sizeof(int));
	
	for(i=0; i<7; i++){
		printf("%d ", ary[i]);
	}
}
void DesSort(int *arr, int len)
{
int i, j, temp;

for(i=0; i< len-1; i++)
{
	for(j=0; j<(len-i)-1; j++)
	{
		if(arr[j]<arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
}

