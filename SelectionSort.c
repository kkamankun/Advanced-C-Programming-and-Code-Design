/*선택 정렬*/
#include<stdio.h>
#define Max_size 10

void selectionSort(int *pArr, int n);
void getArray(int *pArr, int n);
void printArray(int *pArr, int n);
void SWAP(int *num1, int *num2);


int main(void)
{
	int arr[Max_size]; int i = 0;
	
	getArray(arr, Max_size);

	selectionSort(arr, Max_size);
	
	printArray(arr, Max_size);

	return 0;
}

void selectionSort(int *pArr, int n)
{
	int smallest; int temp;
	for (int i = 0; i < n - 1; i++)// (n-1)번 반복
	{	smallest = i; // 정렬 안 된 지역의 첫 번째 원소가 제일 작다고 가정
	for (int j = i+1; j < n; j++)
	{
		if (pArr[j] < pArr[smallest])
			smallest = j; // 가장 작은 원소의 위치만 기억
		}
	
	SWAP(&pArr[i], &pArr[smallest]);
	
	for (int i = 0; i < Max_size; i++)
		printf("%d ", pArr[i]);
	printf("\n\n");
	}
	return;
}

void getArray(int *pArr, int n)
{
	printf("정렬되지 않은 배열: ");
	for (int i = 0; i < Max_size; i++)
		scanf("%d", &pArr[i]);
	return;
}

void printArray(int *pArr, int n)
{
	printf("정렬된 배열: ");
	for (int i = 0; i < Max_size; i++)
		printf("%d ", pArr[i]);

	return;
}

void SWAP(int *num1, int *num2) // *num1=pArr[i], *num2=pArr[smallest]
{
	int temp; 
	temp = *num1;  // 정렬 안 된 지역의 첫 번째 원소와 자리 교환
	*num1 = *num2;
	*num2 = temp;

	return;
}