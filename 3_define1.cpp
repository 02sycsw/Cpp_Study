#include <iostream>
using namespace std;

const double CONST_PI = 3.14;
#define DEFINE_PI 3.14

//#dfine과 const 자료형의 차이는?
//일단 #define은 문자열이 해당하는 상수로 대치됨.
//const는 메모리를 할당 받고, define은 그렇지 않음
//define은 값을 바꿔치기 하는 것이기 때문
//const는 식을 넣었을 때 이미 계산이 완료된 상태가 됨
//그래서 메모리를 타이트하게 쓸 때는 define을 선호
//https://blex.me/@baealex/c-%ED%8A%9C%ED%86%A0%EB%A6%AC%EC%96%BC-3-%EC%A0%84%EC%B2%98%EB%A6%AC%EA%B8%B0-define%EA%B3%BC-const%EC%9D%98-%EC%B0%A8%EC%9D%B4

int main() {
	double radius = 3;

	cout << "면적(CONST_PI)  : " << CONST_PI * radius * radius << endl;
	cout << "면적(DEFINE_PI) : " << DEFINE_PI * radius * radius << endl;

	cout << CONST_PI / 2 << endl;
	cout << DEFINE_PI / 2 << endl;

	return 0;
}