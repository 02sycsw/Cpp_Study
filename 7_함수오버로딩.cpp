#include <iostream>
using namespace std;
int Power(int x) {
	return (x * x);
}

int Power(int x, int y) {
	int result = 1;

	for (int i = 0; i < y; i++)
		result *= x;

	return result;
}

//Power(int x)와 Power(int x, int y = 2)는 사용이 불가능하다.
//후자만 사용은 가능
//매개변수 2개에 모두 상수를 지정해두면 3가지 방식으로 사용이 가능하다.

int main() {
	cout << "Power(3)   : " << Power(3) << endl;
	cout << "Power(3,3) : " << Power(3, 3) << endl;

	return 0;
}