#include<iostream>
#include<vector>
#include<array>

using namespace std;

int main() {
	//vector  <vector>헤더파일 사용
	/*
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
	//Lvalue는 push 후에 바꿀 수 있기 때문

	//emplace_back
	//move, copy없이 바로 넣어주기 때문에 push_back보다 빠름
	TestVec.emplace_back(3);
	*/

	//array  <array>헤더파일 사용
	/*
	//C 스타일 배열
	int C_A[3] = { 1,2,3 };

	//배열 복사 불가능
	//int C_B[3] = C_A;
	
	//std스타일 배열
	array<int, 3> STD_A = { 1,2,3 };

	//배열 복사 가능
	array<int, 3> STD_B = STD_A;
	*/








	
	

	return 0;
}