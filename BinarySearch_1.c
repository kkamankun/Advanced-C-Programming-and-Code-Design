#include<stdio.h>
#define Max_size 15

int binarySearch(int*,int,int,int);

int main(void)
{
	int arr[Max_size]= { 5, 8, 11, 21, 25, 28, 32, 33, 36, 49, 50, 55, 56, 58, 60 }; 
	int index, data;


	while (1)
	{
		printf("찾고자 하는 데이터<검색 종료:0>: ");
		scanf("%d", &data);
		index = binarySearch(arr, 0, Max_size - 1, data);
		if (index == -1)
			printf("찾고자 하는 데이터가 존재하지 않습니다.\n");
		else
			printf("검색된 데이터:%d 번째 위치 %d", arr[index], index);
	}
	return 0;
}

int binarySearch(int *pArr,int first,int last,int key)
{
	int mid;
	if (first > last)
		return -1;

	mid = (first + last) / 2;

	if (key == mid)
		return mid;
	else if (key < pArr[mid])
		return binarySearch(pArr, first, mid - 1, key);
	else if (key > pArr[mid])
		return binarySearch(pArr, mid + 1, last, key);

	return -1;
}

