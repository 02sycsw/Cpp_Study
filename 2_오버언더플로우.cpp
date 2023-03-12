#include <iostream>
using namespace std;
int main(void) {
	char num1 = 127;
	char num2 = -128;

	cout << "num1 = " << (int)num1 << ", num2 =" << (int)num2 << endl;

	num1++; //num1의 값 1 증가: 오버플로우 발생
	num2--; //num2의 값 1 감소: 언더플로우 발생
	//범위보다 큰 값을 저장할 때는 오버플로우(overflow)가 돼서 범위 내에서 가장 작은 수가 되고
	//범위보다 작은 값을 저장할 때는 언더플로우(underflow)가 돼서 범위 내에서 가장 큰 값이 된다.
	//이것은 가장 큰 값과 가장 작은 값이 연결되어있기 때문이다.

	cout << "num1 = " << (int)num1 << ", num2 =" << (int)num2 << endl;
}