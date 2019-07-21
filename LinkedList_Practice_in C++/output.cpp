#include<iostream>
#include"헤더.h"

using namespace std;

void OUTPUT(const NODE* head)
{
	const NODE* temp = NULL;

	//빈 리스트 여부 확인
	if (!head)
	{
		cout << "입력된 데이터가 없습니다..." << endl;
		return;
	}

	//첫 번째 노드부터 맨 마지막 노드의 데이터 출력
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->link;
	}
	cout << endl;

	return;
}