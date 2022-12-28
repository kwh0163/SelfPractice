#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> TestVec;
	//reserve
	//메모리 충돌이 일어나지 않도록 capacity를 지정해주는 함수
	TestVec.reserve(10);

	//push_back
	//capacity가 충분할 때 O(1), push_front는 O(n)
	TestVec.push_back(1);
	TestVec.push_back(2);

	//new[], delete[], malloc, free는 memory leak이 일어날 수 있어서 사용하지 않는 편이 좋음
	
	//vector에 object를 넣을 때 Lvalue라면 copy, Rvalue라면 move시킴

	//emplace_back
	//move, copy없이 바로 넣어주기 때문에 push_back보다 빠름
	TestVec.emplace_back(3);

	int a = 10;
	TestVec.emplace_back(move(a));
	a = 5;
	cout << TestVec[3];
	
	

	return 0;
}