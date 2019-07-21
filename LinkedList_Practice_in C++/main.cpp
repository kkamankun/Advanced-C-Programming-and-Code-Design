#include<iostream>
#include "헤더.h"

using namespace std;

int main(void)
{
	int num;
	NODE*head = NULL;

	while (TRUE) {
		system("cls");

		cout << "###단순 연결 리스트 ###" << endl;
		cout << "1) 데이터 입력" << endl;
		cout << "2) 데이터 출력" << endl;
		cout << "3) 프로그램 종료!!!" << endl;
		cout << "4) 데이터 검색" << endl;
		cout << "5) 메모리 반납" << endl;

		cout << "메뉴 선택 : ";
		cin >> num;
		fflush(stdin);

		switch (num)
		{
		case 1:head = INPUT(head); break;
		case 2:OUTPUT(head); break;
		case 3:cout << "프로그램 종료" << endl;
			return 0;
		case 4:SEARCH(head); break;
		case 5:INIT(head); break;
		default:cout << "잘못된 선택!!!" << endl;
		}

		system("pause");
	}
	return 0;
}