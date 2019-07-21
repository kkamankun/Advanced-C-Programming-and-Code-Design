/* 버블 정렬: 변형된 알고리즘*/
#include<stdio.h>
#define Max_size 10

void bubbleSort(int *, int);
void getArray(int*,int);
void printArray(int*,int);
void SWAP(int*,int*);

int main(void)
{
	int arr[Max_size];

	getArray(arr, Max_size);

	bubbleSort(arr, Max_size);

	printf("정렬된 배열: ");
	printArray(arr, Max_size);

	return 0;
}

void bubbleSort(int *pArr, int n)
{
	int STATE;
	for (int i = 0; i < n - 1; i++) // (n-1)번 반복
	{
		STATE = 0;
		for (int j = n-1; j >= i; j--) // (정렬 안 된 지역)마지막 원소부터 첫 번째 원소까지 비교
		{
			if (pArr[j] < pArr[j - 1])
			{
				SWAP(&pArr[j], &pArr[j - 1]);
				STATE = 1;
			}
		}
		if (STATE == 0)
			return;
		printArray(pArr, n);
		printf("\n");
	}
}	

void SWAP(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return;
}

void getArray(int *pArr, int n) // pArr=arr
{
	printf("정렬되지 않은 배열: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &pArr[i]);
	return;
}

void printArray(int *pArr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", pArr[i]);
	return;
}