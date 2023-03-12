#include <iostream>
using namespace std;

#define MULTI(x, y) x * y
//매크로 함수
//#define SUM(x, y) x +y로 정의했을 때, 
//SUM(3,4)는 3+4로 대치된다. 

//매크로 함수는 엄연히 말하면 함수는 아니지만 형태가 비슷해서 그렇게 부름
//말그대로 대치만 해주는거라서 진짜 함수처럼은 쓸 수 없어서
//두 번째 결과가 21이 아니라 1 + 2 * 3 + 4가 돼서 11이 된 것이다. 

int main() {
	cout << "3 * 4 = " << MULTI(3, 4) << endl;
	cout << "(1 + 2) * (3 + 4) = " << MULTI(1 + 2, 3 + 4) << endl;

	return 0;
}