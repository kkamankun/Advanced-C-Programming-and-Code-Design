#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v(5);    // 0으로 초기화된 5개의 원소
	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

	vector<int>().swap(v);        // 임의 벡터와 교환한다.
	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << v1[0] << ", " << v1.at(0) << ", " << v1.front() << endl; // 첫번째 원소
	cout << v1[4] << ", " << v1.at(4) << ", " << v1.back() << endl; //  마지막 원소

	v1.front() = 100;
	v1.back() = 500;

	cout << v1[0] << ", " << v1.at(0) << ", " << v1.front() << endl; // 첫번째 원소
	cout << v1[4] << ", " << v1.at(4) << ", " << v1.back() << endl; //  마지막 원소

	try {

		cout << v.at(10) << endl;        // 범위를 벋어난 호출 throw out_of_range 예외

	}
	catch (out_of_range &e) {
		cout << e.what() << endl;
	}

	return 0;
}

