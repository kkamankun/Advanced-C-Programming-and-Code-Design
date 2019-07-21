/*삽입 정렬*/
#include<stdio.h>
#define Max_size 10

void insertionSort(int*, int);
void getArray(int*, int);
void printArray(int*, int);
void SWAP(int*, int*);

int main(void)
{
	int arr[Max_size];

	getArray(arr, Max_size);
	insertionSort(arr, Max_size);
	printf("정렬된 배열: ");
	printArray(arr, Max_size);

	return 0;
}

void insertionSort(int *pArr, int n)
{
	int temp;
	for (int i = 1; i < n; i++)
	{
		int j = i - 1; // 정렬 된 지역의 위치
		temp = pArr[i]; // 정렬 안된 지역의 첫 번째 원소 값
		while (j >= 0 && temp < pArr[j])
		{
			pArr[j + 1] = pArr[j]; // 뒤로 미루기
			j--;
		}
		pArr[j + 1] = temp; 
		printArray(pArr, n); // 정렬 상태 확인
		printf("\n");
	}
	return;
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