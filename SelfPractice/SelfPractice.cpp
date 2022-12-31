#include<iostream>
#include<vector>
#include<array>
#include<memory>

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

	//스마트 포인터
	/*
	//일반 포인터는 딜리트 하지않으면 메모리 누수가 생김
	int* RawA = new int();
	delete RawA;

	//unique_ptr
	//unique 포인터는 힙에 있는 데이터를 가리키는 포인터가 한개밖에 지정되지 않는다. 
	unique_ptr<int> U_A = make_unique<int>();
	//그래서 카피는 안되지만 무브는 가능
	unique_ptr<int> U_B = move(U_A);

	//shared_ptr
	//shared 포인터는 서로 공유가 가능하지만 포인터들이 서로 사이클될 수가 있다. 
	shared_ptr<int> S_A = make_shared<int>();
	//복사 가능
	shared_ptr<int> S_B = S_A;

	//weak_ptr
	//weak 포인터는 카운트에 영향을 미치지 않는 포인터이다.
	weak_ptr<int> W_A;
	shared_ptr<int> S_P = make_shared<int>();
	//S_P를 가리키는 포인터가 두개지만 정작 카운트되는 수는 1개이다.
	W_A = S_P;
	cout << "S_P의 카운트 : " << S_P.use_count() << endl;
	*/








	
	

	return 0;
}